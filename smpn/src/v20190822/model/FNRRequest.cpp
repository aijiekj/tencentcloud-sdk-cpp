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

#include <tencentcloud/smpn/v20190822/model/FNRRequest.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Smpn::V20190822::Model;
using namespace rapidjson;
using namespace std;

FNRRequest::FNRRequest() :
    m_phoneNumberHasBeenSet(false)
{
}

CoreInternalOutcome FNRRequest::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("PhoneNumber") && !value["PhoneNumber"].IsNull())
    {
        if (!value["PhoneNumber"].IsString())
        {
            return CoreInternalOutcome(Error("response `FNRRequest.PhoneNumber` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_phoneNumber = string(value["PhoneNumber"].GetString());
        m_phoneNumberHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void FNRRequest::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_phoneNumberHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "PhoneNumber";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_phoneNumber.c_str(), allocator).Move(), allocator);
    }

}


string FNRRequest::GetPhoneNumber() const
{
    return m_phoneNumber;
}

void FNRRequest::SetPhoneNumber(const string& _phoneNumber)
{
    m_phoneNumber = _phoneNumber;
    m_phoneNumberHasBeenSet = true;
}

bool FNRRequest::PhoneNumberHasBeenSet() const
{
    return m_phoneNumberHasBeenSet;
}
