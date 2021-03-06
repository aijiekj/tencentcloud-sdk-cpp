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

#include <tencentcloud/tke/v20180525/model/DeleteClusterRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tke::V20180525::Model;
using namespace rapidjson;
using namespace std;

DeleteClusterRequest::DeleteClusterRequest() :
    m_clusterIdHasBeenSet(false),
    m_instanceDeleteModeHasBeenSet(false)
{
}

string DeleteClusterRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_clusterIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ClusterId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_clusterId.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceDeleteModeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "InstanceDeleteMode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_instanceDeleteMode.c_str(), allocator).Move(), allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DeleteClusterRequest::GetClusterId() const
{
    return m_clusterId;
}

void DeleteClusterRequest::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool DeleteClusterRequest::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

string DeleteClusterRequest::GetInstanceDeleteMode() const
{
    return m_instanceDeleteMode;
}

void DeleteClusterRequest::SetInstanceDeleteMode(const string& _instanceDeleteMode)
{
    m_instanceDeleteMode = _instanceDeleteMode;
    m_instanceDeleteModeHasBeenSet = true;
}

bool DeleteClusterRequest::InstanceDeleteModeHasBeenSet() const
{
    return m_instanceDeleteModeHasBeenSet;
}


