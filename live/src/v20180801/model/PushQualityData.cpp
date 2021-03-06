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

#include <tencentcloud/live/v20180801/model/PushQualityData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Live::V20180801::Model;
using namespace rapidjson;
using namespace std;

PushQualityData::PushQualityData() :
    m_timeHasBeenSet(false),
    m_pushDomainHasBeenSet(false),
    m_appNameHasBeenSet(false),
    m_clientIpHasBeenSet(false),
    m_beginPushTimeHasBeenSet(false),
    m_resolutionHasBeenSet(false),
    m_vCodecHasBeenSet(false),
    m_aCodecHasBeenSet(false),
    m_sequenceHasBeenSet(false),
    m_videoFpsHasBeenSet(false),
    m_videoRateHasBeenSet(false),
    m_audioFpsHasBeenSet(false),
    m_audioRateHasBeenSet(false),
    m_localTsHasBeenSet(false),
    m_videoTsHasBeenSet(false),
    m_audioTsHasBeenSet(false)
{
}

CoreInternalOutcome PushQualityData::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("Time") && !value["Time"].IsNull())
    {
        if (!value["Time"].IsString())
        {
            return CoreInternalOutcome(Error("response `PushQualityData.Time` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_time = string(value["Time"].GetString());
        m_timeHasBeenSet = true;
    }

    if (value.HasMember("PushDomain") && !value["PushDomain"].IsNull())
    {
        if (!value["PushDomain"].IsString())
        {
            return CoreInternalOutcome(Error("response `PushQualityData.PushDomain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_pushDomain = string(value["PushDomain"].GetString());
        m_pushDomainHasBeenSet = true;
    }

    if (value.HasMember("AppName") && !value["AppName"].IsNull())
    {
        if (!value["AppName"].IsString())
        {
            return CoreInternalOutcome(Error("response `PushQualityData.AppName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appName = string(value["AppName"].GetString());
        m_appNameHasBeenSet = true;
    }

    if (value.HasMember("ClientIp") && !value["ClientIp"].IsNull())
    {
        if (!value["ClientIp"].IsString())
        {
            return CoreInternalOutcome(Error("response `PushQualityData.ClientIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clientIp = string(value["ClientIp"].GetString());
        m_clientIpHasBeenSet = true;
    }

    if (value.HasMember("BeginPushTime") && !value["BeginPushTime"].IsNull())
    {
        if (!value["BeginPushTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `PushQualityData.BeginPushTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_beginPushTime = string(value["BeginPushTime"].GetString());
        m_beginPushTimeHasBeenSet = true;
    }

    if (value.HasMember("Resolution") && !value["Resolution"].IsNull())
    {
        if (!value["Resolution"].IsString())
        {
            return CoreInternalOutcome(Error("response `PushQualityData.Resolution` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resolution = string(value["Resolution"].GetString());
        m_resolutionHasBeenSet = true;
    }

    if (value.HasMember("VCodec") && !value["VCodec"].IsNull())
    {
        if (!value["VCodec"].IsString())
        {
            return CoreInternalOutcome(Error("response `PushQualityData.VCodec` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vCodec = string(value["VCodec"].GetString());
        m_vCodecHasBeenSet = true;
    }

    if (value.HasMember("ACodec") && !value["ACodec"].IsNull())
    {
        if (!value["ACodec"].IsString())
        {
            return CoreInternalOutcome(Error("response `PushQualityData.ACodec` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_aCodec = string(value["ACodec"].GetString());
        m_aCodecHasBeenSet = true;
    }

    if (value.HasMember("Sequence") && !value["Sequence"].IsNull())
    {
        if (!value["Sequence"].IsString())
        {
            return CoreInternalOutcome(Error("response `PushQualityData.Sequence` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sequence = string(value["Sequence"].GetString());
        m_sequenceHasBeenSet = true;
    }

    if (value.HasMember("VideoFps") && !value["VideoFps"].IsNull())
    {
        if (!value["VideoFps"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `PushQualityData.VideoFps` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_videoFps = value["VideoFps"].GetUint64();
        m_videoFpsHasBeenSet = true;
    }

    if (value.HasMember("VideoRate") && !value["VideoRate"].IsNull())
    {
        if (!value["VideoRate"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `PushQualityData.VideoRate` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_videoRate = value["VideoRate"].GetUint64();
        m_videoRateHasBeenSet = true;
    }

    if (value.HasMember("AudioFps") && !value["AudioFps"].IsNull())
    {
        if (!value["AudioFps"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `PushQualityData.AudioFps` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_audioFps = value["AudioFps"].GetUint64();
        m_audioFpsHasBeenSet = true;
    }

    if (value.HasMember("AudioRate") && !value["AudioRate"].IsNull())
    {
        if (!value["AudioRate"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `PushQualityData.AudioRate` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_audioRate = value["AudioRate"].GetUint64();
        m_audioRateHasBeenSet = true;
    }

    if (value.HasMember("LocalTs") && !value["LocalTs"].IsNull())
    {
        if (!value["LocalTs"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `PushQualityData.LocalTs` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_localTs = value["LocalTs"].GetUint64();
        m_localTsHasBeenSet = true;
    }

    if (value.HasMember("VideoTs") && !value["VideoTs"].IsNull())
    {
        if (!value["VideoTs"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `PushQualityData.VideoTs` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_videoTs = value["VideoTs"].GetUint64();
        m_videoTsHasBeenSet = true;
    }

    if (value.HasMember("AudioTs") && !value["AudioTs"].IsNull())
    {
        if (!value["AudioTs"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `PushQualityData.AudioTs` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_audioTs = value["AudioTs"].GetUint64();
        m_audioTsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PushQualityData::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_timeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Time";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_time.c_str(), allocator).Move(), allocator);
    }

    if (m_pushDomainHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "PushDomain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_pushDomain.c_str(), allocator).Move(), allocator);
    }

    if (m_appNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "AppName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_appName.c_str(), allocator).Move(), allocator);
    }

    if (m_clientIpHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ClientIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_clientIp.c_str(), allocator).Move(), allocator);
    }

    if (m_beginPushTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "BeginPushTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_beginPushTime.c_str(), allocator).Move(), allocator);
    }

    if (m_resolutionHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Resolution";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_resolution.c_str(), allocator).Move(), allocator);
    }

    if (m_vCodecHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "VCodec";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_vCodec.c_str(), allocator).Move(), allocator);
    }

    if (m_aCodecHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ACodec";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_aCodec.c_str(), allocator).Move(), allocator);
    }

    if (m_sequenceHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Sequence";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_sequence.c_str(), allocator).Move(), allocator);
    }

    if (m_videoFpsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "VideoFps";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_videoFps, allocator);
    }

    if (m_videoRateHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "VideoRate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_videoRate, allocator);
    }

    if (m_audioFpsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "AudioFps";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_audioFps, allocator);
    }

    if (m_audioRateHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "AudioRate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_audioRate, allocator);
    }

    if (m_localTsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "LocalTs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_localTs, allocator);
    }

    if (m_videoTsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "VideoTs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_videoTs, allocator);
    }

    if (m_audioTsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "AudioTs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_audioTs, allocator);
    }

}


string PushQualityData::GetTime() const
{
    return m_time;
}

void PushQualityData::SetTime(const string& _time)
{
    m_time = _time;
    m_timeHasBeenSet = true;
}

bool PushQualityData::TimeHasBeenSet() const
{
    return m_timeHasBeenSet;
}

string PushQualityData::GetPushDomain() const
{
    return m_pushDomain;
}

void PushQualityData::SetPushDomain(const string& _pushDomain)
{
    m_pushDomain = _pushDomain;
    m_pushDomainHasBeenSet = true;
}

bool PushQualityData::PushDomainHasBeenSet() const
{
    return m_pushDomainHasBeenSet;
}

string PushQualityData::GetAppName() const
{
    return m_appName;
}

void PushQualityData::SetAppName(const string& _appName)
{
    m_appName = _appName;
    m_appNameHasBeenSet = true;
}

bool PushQualityData::AppNameHasBeenSet() const
{
    return m_appNameHasBeenSet;
}

string PushQualityData::GetClientIp() const
{
    return m_clientIp;
}

void PushQualityData::SetClientIp(const string& _clientIp)
{
    m_clientIp = _clientIp;
    m_clientIpHasBeenSet = true;
}

bool PushQualityData::ClientIpHasBeenSet() const
{
    return m_clientIpHasBeenSet;
}

string PushQualityData::GetBeginPushTime() const
{
    return m_beginPushTime;
}

void PushQualityData::SetBeginPushTime(const string& _beginPushTime)
{
    m_beginPushTime = _beginPushTime;
    m_beginPushTimeHasBeenSet = true;
}

bool PushQualityData::BeginPushTimeHasBeenSet() const
{
    return m_beginPushTimeHasBeenSet;
}

string PushQualityData::GetResolution() const
{
    return m_resolution;
}

void PushQualityData::SetResolution(const string& _resolution)
{
    m_resolution = _resolution;
    m_resolutionHasBeenSet = true;
}

bool PushQualityData::ResolutionHasBeenSet() const
{
    return m_resolutionHasBeenSet;
}

string PushQualityData::GetVCodec() const
{
    return m_vCodec;
}

void PushQualityData::SetVCodec(const string& _vCodec)
{
    m_vCodec = _vCodec;
    m_vCodecHasBeenSet = true;
}

bool PushQualityData::VCodecHasBeenSet() const
{
    return m_vCodecHasBeenSet;
}

string PushQualityData::GetACodec() const
{
    return m_aCodec;
}

void PushQualityData::SetACodec(const string& _aCodec)
{
    m_aCodec = _aCodec;
    m_aCodecHasBeenSet = true;
}

bool PushQualityData::ACodecHasBeenSet() const
{
    return m_aCodecHasBeenSet;
}

string PushQualityData::GetSequence() const
{
    return m_sequence;
}

void PushQualityData::SetSequence(const string& _sequence)
{
    m_sequence = _sequence;
    m_sequenceHasBeenSet = true;
}

bool PushQualityData::SequenceHasBeenSet() const
{
    return m_sequenceHasBeenSet;
}

uint64_t PushQualityData::GetVideoFps() const
{
    return m_videoFps;
}

void PushQualityData::SetVideoFps(const uint64_t& _videoFps)
{
    m_videoFps = _videoFps;
    m_videoFpsHasBeenSet = true;
}

bool PushQualityData::VideoFpsHasBeenSet() const
{
    return m_videoFpsHasBeenSet;
}

uint64_t PushQualityData::GetVideoRate() const
{
    return m_videoRate;
}

void PushQualityData::SetVideoRate(const uint64_t& _videoRate)
{
    m_videoRate = _videoRate;
    m_videoRateHasBeenSet = true;
}

bool PushQualityData::VideoRateHasBeenSet() const
{
    return m_videoRateHasBeenSet;
}

uint64_t PushQualityData::GetAudioFps() const
{
    return m_audioFps;
}

void PushQualityData::SetAudioFps(const uint64_t& _audioFps)
{
    m_audioFps = _audioFps;
    m_audioFpsHasBeenSet = true;
}

bool PushQualityData::AudioFpsHasBeenSet() const
{
    return m_audioFpsHasBeenSet;
}

uint64_t PushQualityData::GetAudioRate() const
{
    return m_audioRate;
}

void PushQualityData::SetAudioRate(const uint64_t& _audioRate)
{
    m_audioRate = _audioRate;
    m_audioRateHasBeenSet = true;
}

bool PushQualityData::AudioRateHasBeenSet() const
{
    return m_audioRateHasBeenSet;
}

uint64_t PushQualityData::GetLocalTs() const
{
    return m_localTs;
}

void PushQualityData::SetLocalTs(const uint64_t& _localTs)
{
    m_localTs = _localTs;
    m_localTsHasBeenSet = true;
}

bool PushQualityData::LocalTsHasBeenSet() const
{
    return m_localTsHasBeenSet;
}

uint64_t PushQualityData::GetVideoTs() const
{
    return m_videoTs;
}

void PushQualityData::SetVideoTs(const uint64_t& _videoTs)
{
    m_videoTs = _videoTs;
    m_videoTsHasBeenSet = true;
}

bool PushQualityData::VideoTsHasBeenSet() const
{
    return m_videoTsHasBeenSet;
}

uint64_t PushQualityData::GetAudioTs() const
{
    return m_audioTs;
}

void PushQualityData::SetAudioTs(const uint64_t& _audioTs)
{
    m_audioTs = _audioTs;
    m_audioTsHasBeenSet = true;
}

bool PushQualityData::AudioTsHasBeenSet() const
{
    return m_audioTsHasBeenSet;
}

