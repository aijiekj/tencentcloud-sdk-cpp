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

#include <tencentcloud/cws/v20180312/model/MonitorMiniSite.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cws::V20180312::Model;
using namespace rapidjson;
using namespace std;

MonitorMiniSite::MonitorMiniSite() :
    m_siteIdHasBeenSet(false),
    m_urlHasBeenSet(false)
{
}

CoreInternalOutcome MonitorMiniSite::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("SiteId") && !value["SiteId"].IsNull())
    {
        if (!value["SiteId"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `MonitorMiniSite.SiteId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_siteId = value["SiteId"].GetUint64();
        m_siteIdHasBeenSet = true;
    }

    if (value.HasMember("Url") && !value["Url"].IsNull())
    {
        if (!value["Url"].IsString())
        {
            return CoreInternalOutcome(Error("response `MonitorMiniSite.Url` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_url = string(value["Url"].GetString());
        m_urlHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MonitorMiniSite::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_siteIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SiteId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_siteId, allocator);
    }

    if (m_urlHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Url";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_url.c_str(), allocator).Move(), allocator);
    }

}


uint64_t MonitorMiniSite::GetSiteId() const
{
    return m_siteId;
}

void MonitorMiniSite::SetSiteId(const uint64_t& _siteId)
{
    m_siteId = _siteId;
    m_siteIdHasBeenSet = true;
}

bool MonitorMiniSite::SiteIdHasBeenSet() const
{
    return m_siteIdHasBeenSet;
}

string MonitorMiniSite::GetUrl() const
{
    return m_url;
}

void MonitorMiniSite::SetUrl(const string& _url)
{
    m_url = _url;
    m_urlHasBeenSet = true;
}

bool MonitorMiniSite::UrlHasBeenSet() const
{
    return m_urlHasBeenSet;
}
