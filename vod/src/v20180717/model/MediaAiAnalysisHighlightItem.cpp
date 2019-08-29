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

#include <tencentcloud/vod/v20180717/model/MediaAiAnalysisHighlightItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20180717::Model;
using namespace rapidjson;
using namespace std;

MediaAiAnalysisHighlightItem::MediaAiAnalysisHighlightItem() :
    m_highlightUrlHasBeenSet(false),
    m_covImgUrlHasBeenSet(false),
    m_confidenceHasBeenSet(false),
    m_durationHasBeenSet(false)
{
}

CoreInternalOutcome MediaAiAnalysisHighlightItem::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("HighlightUrl") && !value["HighlightUrl"].IsNull())
    {
        if (!value["HighlightUrl"].IsString())
        {
            return CoreInternalOutcome(Error("response `MediaAiAnalysisHighlightItem.HighlightUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_highlightUrl = string(value["HighlightUrl"].GetString());
        m_highlightUrlHasBeenSet = true;
    }

    if (value.HasMember("CovImgUrl") && !value["CovImgUrl"].IsNull())
    {
        if (!value["CovImgUrl"].IsString())
        {
            return CoreInternalOutcome(Error("response `MediaAiAnalysisHighlightItem.CovImgUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_covImgUrl = string(value["CovImgUrl"].GetString());
        m_covImgUrlHasBeenSet = true;
    }

    if (value.HasMember("Confidence") && !value["Confidence"].IsNull())
    {
        if (!value["Confidence"].IsDouble())
        {
            return CoreInternalOutcome(Error("response `MediaAiAnalysisHighlightItem.Confidence` IsDouble=false incorrectly").SetRequestId(requestId));
        }
        m_confidence = value["Confidence"].GetDouble();
        m_confidenceHasBeenSet = true;
    }

    if (value.HasMember("Duration") && !value["Duration"].IsNull())
    {
        if (!value["Duration"].IsDouble())
        {
            return CoreInternalOutcome(Error("response `MediaAiAnalysisHighlightItem.Duration` IsDouble=false incorrectly").SetRequestId(requestId));
        }
        m_duration = value["Duration"].GetDouble();
        m_durationHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MediaAiAnalysisHighlightItem::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_highlightUrlHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "HighlightUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_highlightUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_covImgUrlHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CovImgUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_covImgUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_confidenceHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Confidence";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_confidence, allocator);
    }

    if (m_durationHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Duration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_duration, allocator);
    }

}


string MediaAiAnalysisHighlightItem::GetHighlightUrl() const
{
    return m_highlightUrl;
}

void MediaAiAnalysisHighlightItem::SetHighlightUrl(const string& _highlightUrl)
{
    m_highlightUrl = _highlightUrl;
    m_highlightUrlHasBeenSet = true;
}

bool MediaAiAnalysisHighlightItem::HighlightUrlHasBeenSet() const
{
    return m_highlightUrlHasBeenSet;
}

string MediaAiAnalysisHighlightItem::GetCovImgUrl() const
{
    return m_covImgUrl;
}

void MediaAiAnalysisHighlightItem::SetCovImgUrl(const string& _covImgUrl)
{
    m_covImgUrl = _covImgUrl;
    m_covImgUrlHasBeenSet = true;
}

bool MediaAiAnalysisHighlightItem::CovImgUrlHasBeenSet() const
{
    return m_covImgUrlHasBeenSet;
}

double MediaAiAnalysisHighlightItem::GetConfidence() const
{
    return m_confidence;
}

void MediaAiAnalysisHighlightItem::SetConfidence(const double& _confidence)
{
    m_confidence = _confidence;
    m_confidenceHasBeenSet = true;
}

bool MediaAiAnalysisHighlightItem::ConfidenceHasBeenSet() const
{
    return m_confidenceHasBeenSet;
}

double MediaAiAnalysisHighlightItem::GetDuration() const
{
    return m_duration;
}

void MediaAiAnalysisHighlightItem::SetDuration(const double& _duration)
{
    m_duration = _duration;
    m_durationHasBeenSet = true;
}

bool MediaAiAnalysisHighlightItem::DurationHasBeenSet() const
{
    return m_durationHasBeenSet;
}
