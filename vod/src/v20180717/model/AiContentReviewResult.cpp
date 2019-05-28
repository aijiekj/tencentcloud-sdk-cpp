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

#include <tencentcloud/vod/v20180717/model/AiContentReviewResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20180717::Model;
using namespace rapidjson;
using namespace std;

AiContentReviewResult::AiContentReviewResult() :
    m_typeHasBeenSet(false),
    m_pornTaskHasBeenSet(false),
    m_terrorismTaskHasBeenSet(false),
    m_politicalTaskHasBeenSet(false),
    m_pornAsrTaskHasBeenSet(false),
    m_pornOcrTaskHasBeenSet(false),
    m_politicalAsrTaskHasBeenSet(false),
    m_politicalOcrTaskHasBeenSet(false)
{
}

CoreInternalOutcome AiContentReviewResult::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Error("response `AiContentReviewResult.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("PornTask") && !value["PornTask"].IsNull())
    {
        if (!value["PornTask"].IsObject())
        {
            return CoreInternalOutcome(Error("response `AiContentReviewResult.PornTask` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_pornTask.Deserialize(value["PornTask"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_pornTaskHasBeenSet = true;
    }

    if (value.HasMember("TerrorismTask") && !value["TerrorismTask"].IsNull())
    {
        if (!value["TerrorismTask"].IsObject())
        {
            return CoreInternalOutcome(Error("response `AiContentReviewResult.TerrorismTask` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_terrorismTask.Deserialize(value["TerrorismTask"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_terrorismTaskHasBeenSet = true;
    }

    if (value.HasMember("PoliticalTask") && !value["PoliticalTask"].IsNull())
    {
        if (!value["PoliticalTask"].IsObject())
        {
            return CoreInternalOutcome(Error("response `AiContentReviewResult.PoliticalTask` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_politicalTask.Deserialize(value["PoliticalTask"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_politicalTaskHasBeenSet = true;
    }

    if (value.HasMember("PornAsrTask") && !value["PornAsrTask"].IsNull())
    {
        if (!value["PornAsrTask"].IsObject())
        {
            return CoreInternalOutcome(Error("response `AiContentReviewResult.PornAsrTask` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_pornAsrTask.Deserialize(value["PornAsrTask"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_pornAsrTaskHasBeenSet = true;
    }

    if (value.HasMember("PornOcrTask") && !value["PornOcrTask"].IsNull())
    {
        if (!value["PornOcrTask"].IsObject())
        {
            return CoreInternalOutcome(Error("response `AiContentReviewResult.PornOcrTask` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_pornOcrTask.Deserialize(value["PornOcrTask"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_pornOcrTaskHasBeenSet = true;
    }

    if (value.HasMember("PoliticalAsrTask") && !value["PoliticalAsrTask"].IsNull())
    {
        if (!value["PoliticalAsrTask"].IsObject())
        {
            return CoreInternalOutcome(Error("response `AiContentReviewResult.PoliticalAsrTask` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_politicalAsrTask.Deserialize(value["PoliticalAsrTask"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_politicalAsrTaskHasBeenSet = true;
    }

    if (value.HasMember("PoliticalOcrTask") && !value["PoliticalOcrTask"].IsNull())
    {
        if (!value["PoliticalOcrTask"].IsObject())
        {
            return CoreInternalOutcome(Error("response `AiContentReviewResult.PoliticalOcrTask` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_politicalOcrTask.Deserialize(value["PoliticalOcrTask"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_politicalOcrTaskHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AiContentReviewResult::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_typeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_pornTaskHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "PornTask";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_pornTask.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_terrorismTaskHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "TerrorismTask";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_terrorismTask.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_politicalTaskHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "PoliticalTask";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_politicalTask.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_pornAsrTaskHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "PornAsrTask";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_pornAsrTask.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_pornOcrTaskHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "PornOcrTask";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_pornOcrTask.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_politicalAsrTaskHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "PoliticalAsrTask";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_politicalAsrTask.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_politicalOcrTaskHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "PoliticalOcrTask";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_politicalOcrTask.ToJsonObject(value[key.c_str()], allocator);
    }

}


string AiContentReviewResult::GetType() const
{
    return m_type;
}

void AiContentReviewResult::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool AiContentReviewResult::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

AiReviewTaskPornResult AiContentReviewResult::GetPornTask() const
{
    return m_pornTask;
}

void AiContentReviewResult::SetPornTask(const AiReviewTaskPornResult& _pornTask)
{
    m_pornTask = _pornTask;
    m_pornTaskHasBeenSet = true;
}

bool AiContentReviewResult::PornTaskHasBeenSet() const
{
    return m_pornTaskHasBeenSet;
}

AiReviewTaskTerrorismResult AiContentReviewResult::GetTerrorismTask() const
{
    return m_terrorismTask;
}

void AiContentReviewResult::SetTerrorismTask(const AiReviewTaskTerrorismResult& _terrorismTask)
{
    m_terrorismTask = _terrorismTask;
    m_terrorismTaskHasBeenSet = true;
}

bool AiContentReviewResult::TerrorismTaskHasBeenSet() const
{
    return m_terrorismTaskHasBeenSet;
}

AiReviewTaskPoliticalResult AiContentReviewResult::GetPoliticalTask() const
{
    return m_politicalTask;
}

void AiContentReviewResult::SetPoliticalTask(const AiReviewTaskPoliticalResult& _politicalTask)
{
    m_politicalTask = _politicalTask;
    m_politicalTaskHasBeenSet = true;
}

bool AiContentReviewResult::PoliticalTaskHasBeenSet() const
{
    return m_politicalTaskHasBeenSet;
}

AiReviewTaskPornAsrResult AiContentReviewResult::GetPornAsrTask() const
{
    return m_pornAsrTask;
}

void AiContentReviewResult::SetPornAsrTask(const AiReviewTaskPornAsrResult& _pornAsrTask)
{
    m_pornAsrTask = _pornAsrTask;
    m_pornAsrTaskHasBeenSet = true;
}

bool AiContentReviewResult::PornAsrTaskHasBeenSet() const
{
    return m_pornAsrTaskHasBeenSet;
}

AiReviewTaskPornOcrResult AiContentReviewResult::GetPornOcrTask() const
{
    return m_pornOcrTask;
}

void AiContentReviewResult::SetPornOcrTask(const AiReviewTaskPornOcrResult& _pornOcrTask)
{
    m_pornOcrTask = _pornOcrTask;
    m_pornOcrTaskHasBeenSet = true;
}

bool AiContentReviewResult::PornOcrTaskHasBeenSet() const
{
    return m_pornOcrTaskHasBeenSet;
}

AiReviewTaskPoliticalAsrResult AiContentReviewResult::GetPoliticalAsrTask() const
{
    return m_politicalAsrTask;
}

void AiContentReviewResult::SetPoliticalAsrTask(const AiReviewTaskPoliticalAsrResult& _politicalAsrTask)
{
    m_politicalAsrTask = _politicalAsrTask;
    m_politicalAsrTaskHasBeenSet = true;
}

bool AiContentReviewResult::PoliticalAsrTaskHasBeenSet() const
{
    return m_politicalAsrTaskHasBeenSet;
}

AiReviewTaskPoliticalOcrResult AiContentReviewResult::GetPoliticalOcrTask() const
{
    return m_politicalOcrTask;
}

void AiContentReviewResult::SetPoliticalOcrTask(const AiReviewTaskPoliticalOcrResult& _politicalOcrTask)
{
    m_politicalOcrTask = _politicalOcrTask;
    m_politicalOcrTaskHasBeenSet = true;
}

bool AiContentReviewResult::PoliticalOcrTaskHasBeenSet() const
{
    return m_politicalOcrTaskHasBeenSet;
}
