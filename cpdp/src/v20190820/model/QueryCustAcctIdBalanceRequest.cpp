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

#include <tencentcloud/cpdp/v20190820/model/QueryCustAcctIdBalanceRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace rapidjson;
using namespace std;

QueryCustAcctIdBalanceRequest::QueryCustAcctIdBalanceRequest() :
    m_mrchCodeHasBeenSet(false),
    m_queryFlagHasBeenSet(false),
    m_pageNumHasBeenSet(false),
    m_subAcctNoHasBeenSet(false),
    m_reservedMsgHasBeenSet(false)
{
}

string QueryCustAcctIdBalanceRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_mrchCodeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "MrchCode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_mrchCode.c_str(), allocator).Move(), allocator);
    }

    if (m_queryFlagHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "QueryFlag";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_queryFlag.c_str(), allocator).Move(), allocator);
    }

    if (m_pageNumHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "PageNum";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_pageNum.c_str(), allocator).Move(), allocator);
    }

    if (m_subAcctNoHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SubAcctNo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_subAcctNo.c_str(), allocator).Move(), allocator);
    }

    if (m_reservedMsgHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ReservedMsg";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_reservedMsg.c_str(), allocator).Move(), allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string QueryCustAcctIdBalanceRequest::GetMrchCode() const
{
    return m_mrchCode;
}

void QueryCustAcctIdBalanceRequest::SetMrchCode(const string& _mrchCode)
{
    m_mrchCode = _mrchCode;
    m_mrchCodeHasBeenSet = true;
}

bool QueryCustAcctIdBalanceRequest::MrchCodeHasBeenSet() const
{
    return m_mrchCodeHasBeenSet;
}

string QueryCustAcctIdBalanceRequest::GetQueryFlag() const
{
    return m_queryFlag;
}

void QueryCustAcctIdBalanceRequest::SetQueryFlag(const string& _queryFlag)
{
    m_queryFlag = _queryFlag;
    m_queryFlagHasBeenSet = true;
}

bool QueryCustAcctIdBalanceRequest::QueryFlagHasBeenSet() const
{
    return m_queryFlagHasBeenSet;
}

string QueryCustAcctIdBalanceRequest::GetPageNum() const
{
    return m_pageNum;
}

void QueryCustAcctIdBalanceRequest::SetPageNum(const string& _pageNum)
{
    m_pageNum = _pageNum;
    m_pageNumHasBeenSet = true;
}

bool QueryCustAcctIdBalanceRequest::PageNumHasBeenSet() const
{
    return m_pageNumHasBeenSet;
}

string QueryCustAcctIdBalanceRequest::GetSubAcctNo() const
{
    return m_subAcctNo;
}

void QueryCustAcctIdBalanceRequest::SetSubAcctNo(const string& _subAcctNo)
{
    m_subAcctNo = _subAcctNo;
    m_subAcctNoHasBeenSet = true;
}

bool QueryCustAcctIdBalanceRequest::SubAcctNoHasBeenSet() const
{
    return m_subAcctNoHasBeenSet;
}

string QueryCustAcctIdBalanceRequest::GetReservedMsg() const
{
    return m_reservedMsg;
}

void QueryCustAcctIdBalanceRequest::SetReservedMsg(const string& _reservedMsg)
{
    m_reservedMsg = _reservedMsg;
    m_reservedMsgHasBeenSet = true;
}

bool QueryCustAcctIdBalanceRequest::ReservedMsgHasBeenSet() const
{
    return m_reservedMsgHasBeenSet;
}


