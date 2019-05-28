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

#include <tencentcloud/vpc/v20170312/model/CreateRoutesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Vpc::V20170312::Model;
using namespace rapidjson;
using namespace std;

CreateRoutesRequest::CreateRoutesRequest() :
    m_routeTableIdHasBeenSet(false),
    m_routesHasBeenSet(false)
{
}

string CreateRoutesRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_routeTableIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "RouteTableId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_routeTableId.c_str(), allocator).Move(), allocator);
    }

    if (m_routesHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Routes";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_routes.begin(); itr != m_routes.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateRoutesRequest::GetRouteTableId() const
{
    return m_routeTableId;
}

void CreateRoutesRequest::SetRouteTableId(const string& _routeTableId)
{
    m_routeTableId = _routeTableId;
    m_routeTableIdHasBeenSet = true;
}

bool CreateRoutesRequest::RouteTableIdHasBeenSet() const
{
    return m_routeTableIdHasBeenSet;
}

vector<Route> CreateRoutesRequest::GetRoutes() const
{
    return m_routes;
}

void CreateRoutesRequest::SetRoutes(const vector<Route>& _routes)
{
    m_routes = _routes;
    m_routesHasBeenSet = true;
}

bool CreateRoutesRequest::RoutesHasBeenSet() const
{
    return m_routesHasBeenSet;
}

