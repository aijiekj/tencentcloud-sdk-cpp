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

#include <tencentcloud/tsf/v20180326/model/DescribeDownloadInfoRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tsf::V20180326::Model;
using namespace rapidjson;
using namespace std;

DescribeDownloadInfoRequest::DescribeDownloadInfoRequest() :
    m_applicationIdHasBeenSet(false),
    m_pkgIdHasBeenSet(false)
{
}

string DescribeDownloadInfoRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_applicationIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ApplicationId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_applicationId.c_str(), allocator).Move(), allocator);
    }

    if (m_pkgIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "PkgId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_pkgId.c_str(), allocator).Move(), allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeDownloadInfoRequest::GetApplicationId() const
{
    return m_applicationId;
}

void DescribeDownloadInfoRequest::SetApplicationId(const string& _applicationId)
{
    m_applicationId = _applicationId;
    m_applicationIdHasBeenSet = true;
}

bool DescribeDownloadInfoRequest::ApplicationIdHasBeenSet() const
{
    return m_applicationIdHasBeenSet;
}

string DescribeDownloadInfoRequest::GetPkgId() const
{
    return m_pkgId;
}

void DescribeDownloadInfoRequest::SetPkgId(const string& _pkgId)
{
    m_pkgId = _pkgId;
    m_pkgIdHasBeenSet = true;
}

bool DescribeDownloadInfoRequest::PkgIdHasBeenSet() const
{
    return m_pkgIdHasBeenSet;
}


