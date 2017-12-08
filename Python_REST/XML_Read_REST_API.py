#------------------------------------------------------------------------------
# File: XML_Read_REST_API.py  
# 
# Description:
#     This is a python service which runs on the target host and exposes
#     a REST API to read the XML file present on that host.
#
# Usage:
#       python XML_Read_REST_API.py
#
#       PRESS Ctrl+c to stop
#------------------------------------------------------------------------------

from flask import Flask, request
from flask_restful import Resource, Api
from sqlalchemy import create_engine
from json import dumps
from flask_jsonpify import jsonify
import json
import xmltodict
import socket

# Host and Port for service 
appHost='192.168.x.xxx'
appPort=5002
# Port status
portBusy=0

app = Flask(__name__)
api = Api(app)

# Method which reads XML file and sends JSON response
class PythonXmlToJSON(Resource):
    def  get(self):
        with open('XML_file.xml', 'r') as myfile:
            data=myfile.read().replace('\n', '')
            o = xmltodict.parse(data)
            jStr = json.dumps(o)
            strOutJSON = json.loads(jStr)
            return strOutJSON

api.add_resource(PythonXmlToJSON, '/readxml') # REST API to read xml file


if __name__ == '__main__':
    s = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
    try:
        s.bind((appHost, appPort))
    except socket.error as e:
        if e.errno == 98:
            print("ERROR: Port is already in use")
            portBusy=1
        else:
            # something else raised the socket.error exception
            print(e)
            portBusy=1
    s.close()
    if portBusy == 0:
        app.run(host=appHost,port=appPort)

