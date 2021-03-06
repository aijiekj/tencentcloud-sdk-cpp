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

#include <tencentcloud/clb/v20180317/model/DeleteRuleRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Clb::V20180317::Model;
using namespace rapidjson;
using namespace std;

DeleteRuleRequest::DeleteRuleRequest() :
    m_loadBalancerIdHasBeenSet(false),
    m_listenerIdHasBeenSet(false),
    m_locationIdsHasBeenSet(false),
    m_domainHasBeenSet(false),
    m_urlHasBeenSet(false)
{
}

string DeleteRuleRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_loadBalancerIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "LoadBalancerId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_loadBalancerId.c_str(), allocator).Move(), allocator);
    }

    if (m_listenerIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ListenerId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_listenerId.c_str(), allocator).Move(), allocator);
    }

    if (m_locationIdsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "LocationIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_locationIds.begin(); itr != m_locationIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_domainHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Domain";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_domain.c_str(), allocator).Move(), allocator);
    }

    if (m_urlHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Url";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_url.c_str(), allocator).Move(), allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DeleteRuleRequest::GetLoadBalancerId() const
{
    return m_loadBalancerId;
}

void DeleteRuleRequest::SetLoadBalancerId(const string& _loadBalancerId)
{
    m_loadBalancerId = _loadBalancerId;
    m_loadBalancerIdHasBeenSet = true;
}

bool DeleteRuleRequest::LoadBalancerIdHasBeenSet() const
{
    return m_loadBalancerIdHasBeenSet;
}

string DeleteRuleRequest::GetListenerId() const
{
    return m_listenerId;
}

void DeleteRuleRequest::SetListenerId(const string& _listenerId)
{
    m_listenerId = _listenerId;
    m_listenerIdHasBeenSet = true;
}

bool DeleteRuleRequest::ListenerIdHasBeenSet() const
{
    return m_listenerIdHasBeenSet;
}

vector<string> DeleteRuleRequest::GetLocationIds() const
{
    return m_locationIds;
}

void DeleteRuleRequest::SetLocationIds(const vector<string>& _locationIds)
{
    m_locationIds = _locationIds;
    m_locationIdsHasBeenSet = true;
}

bool DeleteRuleRequest::LocationIdsHasBeenSet() const
{
    return m_locationIdsHasBeenSet;
}

string DeleteRuleRequest::GetDomain() const
{
    return m_domain;
}

void DeleteRuleRequest::SetDomain(const string& _domain)
{
    m_domain = _domain;
    m_domainHasBeenSet = true;
}

bool DeleteRuleRequest::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}

string DeleteRuleRequest::GetUrl() const
{
    return m_url;
}

void DeleteRuleRequest::SetUrl(const string& _url)
{
    m_url = _url;
    m_urlHasBeenSet = true;
}

bool DeleteRuleRequest::UrlHasBeenSet() const
{
    return m_urlHasBeenSet;
}


