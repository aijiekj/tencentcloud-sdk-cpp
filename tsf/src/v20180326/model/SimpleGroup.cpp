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

#include <tencentcloud/tsf/v20180326/model/SimpleGroup.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tsf::V20180326::Model;
using namespace rapidjson;
using namespace std;

SimpleGroup::SimpleGroup() :
    m_groupIdHasBeenSet(false),
    m_groupNameHasBeenSet(false),
    m_applicationIdHasBeenSet(false),
    m_applicationNameHasBeenSet(false),
    m_applicationTypeHasBeenSet(false),
    m_clusterIdHasBeenSet(false),
    m_clusterNameHasBeenSet(false),
    m_clusterTypeHasBeenSet(false),
    m_namespaceIdHasBeenSet(false),
    m_namespaceNameHasBeenSet(false)
{
}

CoreInternalOutcome SimpleGroup::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("GroupId") && !value["GroupId"].IsNull())
    {
        if (!value["GroupId"].IsString())
        {
            return CoreInternalOutcome(Error("response `SimpleGroup.GroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_groupId = string(value["GroupId"].GetString());
        m_groupIdHasBeenSet = true;
    }

    if (value.HasMember("GroupName") && !value["GroupName"].IsNull())
    {
        if (!value["GroupName"].IsString())
        {
            return CoreInternalOutcome(Error("response `SimpleGroup.GroupName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_groupName = string(value["GroupName"].GetString());
        m_groupNameHasBeenSet = true;
    }

    if (value.HasMember("ApplicationId") && !value["ApplicationId"].IsNull())
    {
        if (!value["ApplicationId"].IsString())
        {
            return CoreInternalOutcome(Error("response `SimpleGroup.ApplicationId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_applicationId = string(value["ApplicationId"].GetString());
        m_applicationIdHasBeenSet = true;
    }

    if (value.HasMember("ApplicationName") && !value["ApplicationName"].IsNull())
    {
        if (!value["ApplicationName"].IsString())
        {
            return CoreInternalOutcome(Error("response `SimpleGroup.ApplicationName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_applicationName = string(value["ApplicationName"].GetString());
        m_applicationNameHasBeenSet = true;
    }

    if (value.HasMember("ApplicationType") && !value["ApplicationType"].IsNull())
    {
        if (!value["ApplicationType"].IsString())
        {
            return CoreInternalOutcome(Error("response `SimpleGroup.ApplicationType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_applicationType = string(value["ApplicationType"].GetString());
        m_applicationTypeHasBeenSet = true;
    }

    if (value.HasMember("ClusterId") && !value["ClusterId"].IsNull())
    {
        if (!value["ClusterId"].IsString())
        {
            return CoreInternalOutcome(Error("response `SimpleGroup.ClusterId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterId = string(value["ClusterId"].GetString());
        m_clusterIdHasBeenSet = true;
    }

    if (value.HasMember("ClusterName") && !value["ClusterName"].IsNull())
    {
        if (!value["ClusterName"].IsString())
        {
            return CoreInternalOutcome(Error("response `SimpleGroup.ClusterName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterName = string(value["ClusterName"].GetString());
        m_clusterNameHasBeenSet = true;
    }

    if (value.HasMember("ClusterType") && !value["ClusterType"].IsNull())
    {
        if (!value["ClusterType"].IsString())
        {
            return CoreInternalOutcome(Error("response `SimpleGroup.ClusterType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterType = string(value["ClusterType"].GetString());
        m_clusterTypeHasBeenSet = true;
    }

    if (value.HasMember("NamespaceId") && !value["NamespaceId"].IsNull())
    {
        if (!value["NamespaceId"].IsString())
        {
            return CoreInternalOutcome(Error("response `SimpleGroup.NamespaceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_namespaceId = string(value["NamespaceId"].GetString());
        m_namespaceIdHasBeenSet = true;
    }

    if (value.HasMember("NamespaceName") && !value["NamespaceName"].IsNull())
    {
        if (!value["NamespaceName"].IsString())
        {
            return CoreInternalOutcome(Error("response `SimpleGroup.NamespaceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_namespaceName = string(value["NamespaceName"].GetString());
        m_namespaceNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SimpleGroup::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_groupIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "GroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_groupId.c_str(), allocator).Move(), allocator);
    }

    if (m_groupNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "GroupName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_groupName.c_str(), allocator).Move(), allocator);
    }

    if (m_applicationIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ApplicationId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_applicationId.c_str(), allocator).Move(), allocator);
    }

    if (m_applicationNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ApplicationName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_applicationName.c_str(), allocator).Move(), allocator);
    }

    if (m_applicationTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ApplicationType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_applicationType.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ClusterId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_clusterId.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ClusterName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_clusterName.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ClusterType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_clusterType.c_str(), allocator).Move(), allocator);
    }

    if (m_namespaceIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "NamespaceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_namespaceId.c_str(), allocator).Move(), allocator);
    }

    if (m_namespaceNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "NamespaceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_namespaceName.c_str(), allocator).Move(), allocator);
    }

}


string SimpleGroup::GetGroupId() const
{
    return m_groupId;
}

void SimpleGroup::SetGroupId(const string& _groupId)
{
    m_groupId = _groupId;
    m_groupIdHasBeenSet = true;
}

bool SimpleGroup::GroupIdHasBeenSet() const
{
    return m_groupIdHasBeenSet;
}

string SimpleGroup::GetGroupName() const
{
    return m_groupName;
}

void SimpleGroup::SetGroupName(const string& _groupName)
{
    m_groupName = _groupName;
    m_groupNameHasBeenSet = true;
}

bool SimpleGroup::GroupNameHasBeenSet() const
{
    return m_groupNameHasBeenSet;
}

string SimpleGroup::GetApplicationId() const
{
    return m_applicationId;
}

void SimpleGroup::SetApplicationId(const string& _applicationId)
{
    m_applicationId = _applicationId;
    m_applicationIdHasBeenSet = true;
}

bool SimpleGroup::ApplicationIdHasBeenSet() const
{
    return m_applicationIdHasBeenSet;
}

string SimpleGroup::GetApplicationName() const
{
    return m_applicationName;
}

void SimpleGroup::SetApplicationName(const string& _applicationName)
{
    m_applicationName = _applicationName;
    m_applicationNameHasBeenSet = true;
}

bool SimpleGroup::ApplicationNameHasBeenSet() const
{
    return m_applicationNameHasBeenSet;
}

string SimpleGroup::GetApplicationType() const
{
    return m_applicationType;
}

void SimpleGroup::SetApplicationType(const string& _applicationType)
{
    m_applicationType = _applicationType;
    m_applicationTypeHasBeenSet = true;
}

bool SimpleGroup::ApplicationTypeHasBeenSet() const
{
    return m_applicationTypeHasBeenSet;
}

string SimpleGroup::GetClusterId() const
{
    return m_clusterId;
}

void SimpleGroup::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool SimpleGroup::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

string SimpleGroup::GetClusterName() const
{
    return m_clusterName;
}

void SimpleGroup::SetClusterName(const string& _clusterName)
{
    m_clusterName = _clusterName;
    m_clusterNameHasBeenSet = true;
}

bool SimpleGroup::ClusterNameHasBeenSet() const
{
    return m_clusterNameHasBeenSet;
}

string SimpleGroup::GetClusterType() const
{
    return m_clusterType;
}

void SimpleGroup::SetClusterType(const string& _clusterType)
{
    m_clusterType = _clusterType;
    m_clusterTypeHasBeenSet = true;
}

bool SimpleGroup::ClusterTypeHasBeenSet() const
{
    return m_clusterTypeHasBeenSet;
}

string SimpleGroup::GetNamespaceId() const
{
    return m_namespaceId;
}

void SimpleGroup::SetNamespaceId(const string& _namespaceId)
{
    m_namespaceId = _namespaceId;
    m_namespaceIdHasBeenSet = true;
}

bool SimpleGroup::NamespaceIdHasBeenSet() const
{
    return m_namespaceIdHasBeenSet;
}

string SimpleGroup::GetNamespaceName() const
{
    return m_namespaceName;
}

void SimpleGroup::SetNamespaceName(const string& _namespaceName)
{
    m_namespaceName = _namespaceName;
    m_namespaceNameHasBeenSet = true;
}

bool SimpleGroup::NamespaceNameHasBeenSet() const
{
    return m_namespaceNameHasBeenSet;
}

