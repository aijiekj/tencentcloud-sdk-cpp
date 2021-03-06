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

#include <tencentcloud/tcaplusdb/v20190823/model/ModifyTableMemosRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tcaplusdb::V20190823::Model;
using namespace rapidjson;
using namespace std;

ModifyTableMemosRequest::ModifyTableMemosRequest() :
    m_applicationIdHasBeenSet(false),
    m_tableMemosHasBeenSet(false)
{
}

string ModifyTableMemosRequest::ToJsonString() const
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

    if (m_tableMemosHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "TableMemos";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tableMemos.begin(); itr != m_tableMemos.end(); ++itr, ++i)
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


string ModifyTableMemosRequest::GetApplicationId() const
{
    return m_applicationId;
}

void ModifyTableMemosRequest::SetApplicationId(const string& _applicationId)
{
    m_applicationId = _applicationId;
    m_applicationIdHasBeenSet = true;
}

bool ModifyTableMemosRequest::ApplicationIdHasBeenSet() const
{
    return m_applicationIdHasBeenSet;
}

vector<SelectedTableInfo> ModifyTableMemosRequest::GetTableMemos() const
{
    return m_tableMemos;
}

void ModifyTableMemosRequest::SetTableMemos(const vector<SelectedTableInfo>& _tableMemos)
{
    m_tableMemos = _tableMemos;
    m_tableMemosHasBeenSet = true;
}

bool ModifyTableMemosRequest::TableMemosHasBeenSet() const
{
    return m_tableMemosHasBeenSet;
}


