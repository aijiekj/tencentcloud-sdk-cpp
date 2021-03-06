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

#include <tencentcloud/cpdp/v20190820/model/QueryBalanceRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace rapidjson;
using namespace std;

QueryBalanceRequest::QueryBalanceRequest() :
    m_midasAppIdHasBeenSet(false),
    m_subAppIdHasBeenSet(false),
    m_queryFlagHasBeenSet(false),
    m_pageOffsetHasBeenSet(false),
    m_midasSecretIdHasBeenSet(false),
    m_midasSignatureHasBeenSet(false)
{
}

string QueryBalanceRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_midasAppIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "MidasAppId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_midasAppId.c_str(), allocator).Move(), allocator);
    }

    if (m_subAppIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SubAppId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_subAppId.c_str(), allocator).Move(), allocator);
    }

    if (m_queryFlagHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "QueryFlag";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_queryFlag.c_str(), allocator).Move(), allocator);
    }

    if (m_pageOffsetHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "PageOffset";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_pageOffset.c_str(), allocator).Move(), allocator);
    }

    if (m_midasSecretIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "MidasSecretId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_midasSecretId.c_str(), allocator).Move(), allocator);
    }

    if (m_midasSignatureHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "MidasSignature";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_midasSignature.c_str(), allocator).Move(), allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string QueryBalanceRequest::GetMidasAppId() const
{
    return m_midasAppId;
}

void QueryBalanceRequest::SetMidasAppId(const string& _midasAppId)
{
    m_midasAppId = _midasAppId;
    m_midasAppIdHasBeenSet = true;
}

bool QueryBalanceRequest::MidasAppIdHasBeenSet() const
{
    return m_midasAppIdHasBeenSet;
}

string QueryBalanceRequest::GetSubAppId() const
{
    return m_subAppId;
}

void QueryBalanceRequest::SetSubAppId(const string& _subAppId)
{
    m_subAppId = _subAppId;
    m_subAppIdHasBeenSet = true;
}

bool QueryBalanceRequest::SubAppIdHasBeenSet() const
{
    return m_subAppIdHasBeenSet;
}

string QueryBalanceRequest::GetQueryFlag() const
{
    return m_queryFlag;
}

void QueryBalanceRequest::SetQueryFlag(const string& _queryFlag)
{
    m_queryFlag = _queryFlag;
    m_queryFlagHasBeenSet = true;
}

bool QueryBalanceRequest::QueryFlagHasBeenSet() const
{
    return m_queryFlagHasBeenSet;
}

string QueryBalanceRequest::GetPageOffset() const
{
    return m_pageOffset;
}

void QueryBalanceRequest::SetPageOffset(const string& _pageOffset)
{
    m_pageOffset = _pageOffset;
    m_pageOffsetHasBeenSet = true;
}

bool QueryBalanceRequest::PageOffsetHasBeenSet() const
{
    return m_pageOffsetHasBeenSet;
}

string QueryBalanceRequest::GetMidasSecretId() const
{
    return m_midasSecretId;
}

void QueryBalanceRequest::SetMidasSecretId(const string& _midasSecretId)
{
    m_midasSecretId = _midasSecretId;
    m_midasSecretIdHasBeenSet = true;
}

bool QueryBalanceRequest::MidasSecretIdHasBeenSet() const
{
    return m_midasSecretIdHasBeenSet;
}

string QueryBalanceRequest::GetMidasSignature() const
{
    return m_midasSignature;
}

void QueryBalanceRequest::SetMidasSignature(const string& _midasSignature)
{
    m_midasSignature = _midasSignature;
    m_midasSignatureHasBeenSet = true;
}

bool QueryBalanceRequest::MidasSignatureHasBeenSet() const
{
    return m_midasSignatureHasBeenSet;
}


