/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <tencentcloud/scf/v20180416/model/InvokeRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Scf::V20180416::Model;
using namespace rapidjson;
using namespace std;

InvokeRequest::InvokeRequest() :
    m_functionNameHasBeenSet(false),
    m_invocationTypeHasBeenSet(false),
    m_qualifierHasBeenSet(false),
    m_clientContextHasBeenSet(false),
    m_logTypeHasBeenSet(false),
    m_namespaceHasBeenSet(false)
{
}

string InvokeRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_functionNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "FunctionName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_functionName.c_str(), allocator).Move(), allocator);
    }

    if (m_invocationTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "InvocationType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_invocationType.c_str(), allocator).Move(), allocator);
    }

    if (m_qualifierHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Qualifier";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_qualifier.c_str(), allocator).Move(), allocator);
    }

    if (m_clientContextHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ClientContext";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_clientContext.c_str(), allocator).Move(), allocator);
    }

    if (m_logTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "LogType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_logType.c_str(), allocator).Move(), allocator);
    }

    if (m_namespaceHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Namespace";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_namespace.c_str(), allocator).Move(), allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string InvokeRequest::GetFunctionName() const
{
    return m_functionName;
}

void InvokeRequest::SetFunctionName(const string& _functionName)
{
    m_functionName = _functionName;
    m_functionNameHasBeenSet = true;
}

bool InvokeRequest::FunctionNameHasBeenSet() const
{
    return m_functionNameHasBeenSet;
}

string InvokeRequest::GetInvocationType() const
{
    return m_invocationType;
}

void InvokeRequest::SetInvocationType(const string& _invocationType)
{
    m_invocationType = _invocationType;
    m_invocationTypeHasBeenSet = true;
}

bool InvokeRequest::InvocationTypeHasBeenSet() const
{
    return m_invocationTypeHasBeenSet;
}

string InvokeRequest::GetQualifier() const
{
    return m_qualifier;
}

void InvokeRequest::SetQualifier(const string& _qualifier)
{
    m_qualifier = _qualifier;
    m_qualifierHasBeenSet = true;
}

bool InvokeRequest::QualifierHasBeenSet() const
{
    return m_qualifierHasBeenSet;
}

string InvokeRequest::GetClientContext() const
{
    return m_clientContext;
}

void InvokeRequest::SetClientContext(const string& _clientContext)
{
    m_clientContext = _clientContext;
    m_clientContextHasBeenSet = true;
}

bool InvokeRequest::ClientContextHasBeenSet() const
{
    return m_clientContextHasBeenSet;
}

string InvokeRequest::GetLogType() const
{
    return m_logType;
}

void InvokeRequest::SetLogType(const string& _logType)
{
    m_logType = _logType;
    m_logTypeHasBeenSet = true;
}

bool InvokeRequest::LogTypeHasBeenSet() const
{
    return m_logTypeHasBeenSet;
}

string InvokeRequest::GetNamespace() const
{
    return m_namespace;
}

void InvokeRequest::SetNamespace(const string& _namespace)
{
    m_namespace = _namespace;
    m_namespaceHasBeenSet = true;
}

bool InvokeRequest::NamespaceHasBeenSet() const
{
    return m_namespaceHasBeenSet;
}


