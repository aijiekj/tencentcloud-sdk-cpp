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

#include <tencentcloud/dayu/v20180709/model/DeleteCCSelfDefinePolicyRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dayu::V20180709::Model;
using namespace rapidjson;
using namespace std;

DeleteCCSelfDefinePolicyRequest::DeleteCCSelfDefinePolicyRequest() :
    m_businessHasBeenSet(false),
    m_idHasBeenSet(false),
    m_setIdHasBeenSet(false)
{
}

string DeleteCCSelfDefinePolicyRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_businessHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Business";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_business.c_str(), allocator).Move(), allocator);
    }

    if (m_idHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_id.c_str(), allocator).Move(), allocator);
    }

    if (m_setIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SetId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_setId.c_str(), allocator).Move(), allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DeleteCCSelfDefinePolicyRequest::GetBusiness() const
{
    return m_business;
}

void DeleteCCSelfDefinePolicyRequest::SetBusiness(const string& _business)
{
    m_business = _business;
    m_businessHasBeenSet = true;
}

bool DeleteCCSelfDefinePolicyRequest::BusinessHasBeenSet() const
{
    return m_businessHasBeenSet;
}

string DeleteCCSelfDefinePolicyRequest::GetId() const
{
    return m_id;
}

void DeleteCCSelfDefinePolicyRequest::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool DeleteCCSelfDefinePolicyRequest::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string DeleteCCSelfDefinePolicyRequest::GetSetId() const
{
    return m_setId;
}

void DeleteCCSelfDefinePolicyRequest::SetSetId(const string& _setId)
{
    m_setId = _setId;
    m_setIdHasBeenSet = true;
}

bool DeleteCCSelfDefinePolicyRequest::SetIdHasBeenSet() const
{
    return m_setIdHasBeenSet;
}


