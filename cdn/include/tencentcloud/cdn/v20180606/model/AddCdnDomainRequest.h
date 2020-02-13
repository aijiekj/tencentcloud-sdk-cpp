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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_ADDCDNDOMAINREQUEST_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_ADDCDNDOMAINREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdn/v20180606/model/Origin.h>
#include <tencentcloud/cdn/v20180606/model/IpFilter.h>
#include <tencentcloud/cdn/v20180606/model/IpFreqLimit.h>
#include <tencentcloud/cdn/v20180606/model/StatusCodeCache.h>
#include <tencentcloud/cdn/v20180606/model/Compression.h>
#include <tencentcloud/cdn/v20180606/model/BandwidthAlert.h>
#include <tencentcloud/cdn/v20180606/model/RangeOriginPull.h>
#include <tencentcloud/cdn/v20180606/model/FollowRedirect.h>
#include <tencentcloud/cdn/v20180606/model/ErrorPage.h>
#include <tencentcloud/cdn/v20180606/model/RequestHeader.h>
#include <tencentcloud/cdn/v20180606/model/ResponseHeader.h>
#include <tencentcloud/cdn/v20180606/model/DownstreamCapping.h>
#include <tencentcloud/cdn/v20180606/model/CacheKey.h>
#include <tencentcloud/cdn/v20180606/model/ResponseHeaderCache.h>
#include <tencentcloud/cdn/v20180606/model/VideoSeek.h>
#include <tencentcloud/cdn/v20180606/model/Cache.h>
#include <tencentcloud/cdn/v20180606/model/OriginPullOptimization.h>
#include <tencentcloud/cdn/v20180606/model/Https.h>
#include <tencentcloud/cdn/v20180606/model/Authentication.h>
#include <tencentcloud/cdn/v20180606/model/Seo.h>
#include <tencentcloud/cdn/v20180606/model/ForceRedirect.h>
#include <tencentcloud/cdn/v20180606/model/Referer.h>
#include <tencentcloud/cdn/v20180606/model/MaxAge.h>
#include <tencentcloud/cdn/v20180606/model/Ipv6.h>
#include <tencentcloud/cdn/v20180606/model/SpecificConfig.h>


namespace TencentCloud
{
    namespace Cdn
    {
        namespace V20180606
        {
            namespace Model
            {
                /**
                * AddCdnDomain请求参数结构体
                */
                class AddCdnDomainRequest : public AbstractModel
                {
                public:
                    AddCdnDomainRequest();
                    ~AddCdnDomainRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取域名
                     * @return Domain 域名
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置域名
                     * @param Domain 域名
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     */
                    bool DomainHasBeenSet() const;

                    /**
                     * 获取加速域名业务类型
web：静态加速
download：下载加速
media：流媒体点播加速
                     * @return ServiceType 加速域名业务类型
web：静态加速
download：下载加速
media：流媒体点播加速
                     */
                    std::string GetServiceType() const;

                    /**
                     * 设置加速域名业务类型
web：静态加速
download：下载加速
media：流媒体点播加速
                     * @param ServiceType 加速域名业务类型
web：静态加速
download：下载加速
media：流媒体点播加速
                     */
                    void SetServiceType(const std::string& _serviceType);

                    /**
                     * 判断参数 ServiceType 是否已赋值
                     * @return ServiceType 是否已赋值
                     */
                    bool ServiceTypeHasBeenSet() const;

                    /**
                     * 获取源站配置
                     * @return Origin 源站配置
                     */
                    Origin GetOrigin() const;

                    /**
                     * 设置源站配置
                     * @param Origin 源站配置
                     */
                    void SetOrigin(const Origin& _origin);

                    /**
                     * 判断参数 Origin 是否已赋值
                     * @return Origin 是否已赋值
                     */
                    bool OriginHasBeenSet() const;

                    /**
                     * 获取项目 ID，默认为 0，代表【默认项目】
                     * @return ProjectId 项目 ID，默认为 0，代表【默认项目】
                     */
                    int64_t GetProjectId() const;

                    /**
                     * 设置项目 ID，默认为 0，代表【默认项目】
                     * @param ProjectId 项目 ID，默认为 0，代表【默认项目】
                     */
                    void SetProjectId(const int64_t& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取IP 黑白名单配置
                     * @return IpFilter IP 黑白名单配置
                     */
                    IpFilter GetIpFilter() const;

                    /**
                     * 设置IP 黑白名单配置
                     * @param IpFilter IP 黑白名单配置
                     */
                    void SetIpFilter(const IpFilter& _ipFilter);

                    /**
                     * 判断参数 IpFilter 是否已赋值
                     * @return IpFilter 是否已赋值
                     */
                    bool IpFilterHasBeenSet() const;

                    /**
                     * 获取IP 限频配置
                     * @return IpFreqLimit IP 限频配置
                     */
                    IpFreqLimit GetIpFreqLimit() const;

                    /**
                     * 设置IP 限频配置
                     * @param IpFreqLimit IP 限频配置
                     */
                    void SetIpFreqLimit(const IpFreqLimit& _ipFreqLimit);

                    /**
                     * 判断参数 IpFreqLimit 是否已赋值
                     * @return IpFreqLimit 是否已赋值
                     */
                    bool IpFreqLimitHasBeenSet() const;

                    /**
                     * 获取状态码缓存配置
                     * @return StatusCodeCache 状态码缓存配置
                     */
                    StatusCodeCache GetStatusCodeCache() const;

                    /**
                     * 设置状态码缓存配置
                     * @param StatusCodeCache 状态码缓存配置
                     */
                    void SetStatusCodeCache(const StatusCodeCache& _statusCodeCache);

                    /**
                     * 判断参数 StatusCodeCache 是否已赋值
                     * @return StatusCodeCache 是否已赋值
                     */
                    bool StatusCodeCacheHasBeenSet() const;

                    /**
                     * 获取智能压缩配置
                     * @return Compression 智能压缩配置
                     */
                    Compression GetCompression() const;

                    /**
                     * 设置智能压缩配置
                     * @param Compression 智能压缩配置
                     */
                    void SetCompression(const Compression& _compression);

                    /**
                     * 判断参数 Compression 是否已赋值
                     * @return Compression 是否已赋值
                     */
                    bool CompressionHasBeenSet() const;

                    /**
                     * 获取带宽封顶配置
                     * @return BandwidthAlert 带宽封顶配置
                     */
                    BandwidthAlert GetBandwidthAlert() const;

                    /**
                     * 设置带宽封顶配置
                     * @param BandwidthAlert 带宽封顶配置
                     */
                    void SetBandwidthAlert(const BandwidthAlert& _bandwidthAlert);

                    /**
                     * 判断参数 BandwidthAlert 是否已赋值
                     * @return BandwidthAlert 是否已赋值
                     */
                    bool BandwidthAlertHasBeenSet() const;

                    /**
                     * 获取Range 回源配置
                     * @return RangeOriginPull Range 回源配置
                     */
                    RangeOriginPull GetRangeOriginPull() const;

                    /**
                     * 设置Range 回源配置
                     * @param RangeOriginPull Range 回源配置
                     */
                    void SetRangeOriginPull(const RangeOriginPull& _rangeOriginPull);

                    /**
                     * 判断参数 RangeOriginPull 是否已赋值
                     * @return RangeOriginPull 是否已赋值
                     */
                    bool RangeOriginPullHasBeenSet() const;

                    /**
                     * 获取301/302 回源跟随配置。
                     * @return FollowRedirect 301/302 回源跟随配置。
                     */
                    FollowRedirect GetFollowRedirect() const;

                    /**
                     * 设置301/302 回源跟随配置。
                     * @param FollowRedirect 301/302 回源跟随配置。
                     */
                    void SetFollowRedirect(const FollowRedirect& _followRedirect);

                    /**
                     * 判断参数 FollowRedirect 是否已赋值
                     * @return FollowRedirect 是否已赋值
                     */
                    bool FollowRedirectHasBeenSet() const;

                    /**
                     * 获取错误码重定向配置（功能灰度中，尚未全量）
                     * @return ErrorPage 错误码重定向配置（功能灰度中，尚未全量）
                     */
                    ErrorPage GetErrorPage() const;

                    /**
                     * 设置错误码重定向配置（功能灰度中，尚未全量）
                     * @param ErrorPage 错误码重定向配置（功能灰度中，尚未全量）
                     */
                    void SetErrorPage(const ErrorPage& _errorPage);

                    /**
                     * 判断参数 ErrorPage 是否已赋值
                     * @return ErrorPage 是否已赋值
                     */
                    bool ErrorPageHasBeenSet() const;

                    /**
                     * 获取请求头部配置
                     * @return RequestHeader 请求头部配置
                     */
                    RequestHeader GetRequestHeader() const;

                    /**
                     * 设置请求头部配置
                     * @param RequestHeader 请求头部配置
                     */
                    void SetRequestHeader(const RequestHeader& _requestHeader);

                    /**
                     * 判断参数 RequestHeader 是否已赋值
                     * @return RequestHeader 是否已赋值
                     */
                    bool RequestHeaderHasBeenSet() const;

                    /**
                     * 获取响应头部配置
                     * @return ResponseHeader 响应头部配置
                     */
                    ResponseHeader GetResponseHeader() const;

                    /**
                     * 设置响应头部配置
                     * @param ResponseHeader 响应头部配置
                     */
                    void SetResponseHeader(const ResponseHeader& _responseHeader);

                    /**
                     * 判断参数 ResponseHeader 是否已赋值
                     * @return ResponseHeader 是否已赋值
                     */
                    bool ResponseHeaderHasBeenSet() const;

                    /**
                     * 获取下载速度配置
                     * @return DownstreamCapping 下载速度配置
                     */
                    DownstreamCapping GetDownstreamCapping() const;

                    /**
                     * 设置下载速度配置
                     * @param DownstreamCapping 下载速度配置
                     */
                    void SetDownstreamCapping(const DownstreamCapping& _downstreamCapping);

                    /**
                     * 判断参数 DownstreamCapping 是否已赋值
                     * @return DownstreamCapping 是否已赋值
                     */
                    bool DownstreamCappingHasBeenSet() const;

                    /**
                     * 获取节点缓存键配置
                     * @return CacheKey 节点缓存键配置
                     */
                    CacheKey GetCacheKey() const;

                    /**
                     * 设置节点缓存键配置
                     * @param CacheKey 节点缓存键配置
                     */
                    void SetCacheKey(const CacheKey& _cacheKey);

                    /**
                     * 判断参数 CacheKey 是否已赋值
                     * @return CacheKey 是否已赋值
                     */
                    bool CacheKeyHasBeenSet() const;

                    /**
                     * 获取头部缓存配置
                     * @return ResponseHeaderCache 头部缓存配置
                     */
                    ResponseHeaderCache GetResponseHeaderCache() const;

                    /**
                     * 设置头部缓存配置
                     * @param ResponseHeaderCache 头部缓存配置
                     */
                    void SetResponseHeaderCache(const ResponseHeaderCache& _responseHeaderCache);

                    /**
                     * 判断参数 ResponseHeaderCache 是否已赋值
                     * @return ResponseHeaderCache 是否已赋值
                     */
                    bool ResponseHeaderCacheHasBeenSet() const;

                    /**
                     * 获取视频拖拽配置
                     * @return VideoSeek 视频拖拽配置
                     */
                    VideoSeek GetVideoSeek() const;

                    /**
                     * 设置视频拖拽配置
                     * @param VideoSeek 视频拖拽配置
                     */
                    void SetVideoSeek(const VideoSeek& _videoSeek);

                    /**
                     * 判断参数 VideoSeek 是否已赋值
                     * @return VideoSeek 是否已赋值
                     */
                    bool VideoSeekHasBeenSet() const;

                    /**
                     * 获取缓存过期时间配置
                     * @return Cache 缓存过期时间配置
                     */
                    Cache GetCache() const;

                    /**
                     * 设置缓存过期时间配置
                     * @param Cache 缓存过期时间配置
                     */
                    void SetCache(const Cache& _cache);

                    /**
                     * 判断参数 Cache 是否已赋值
                     * @return Cache 是否已赋值
                     */
                    bool CacheHasBeenSet() const;

                    /**
                     * 获取跨国链路优化配置
                     * @return OriginPullOptimization 跨国链路优化配置
                     */
                    OriginPullOptimization GetOriginPullOptimization() const;

                    /**
                     * 设置跨国链路优化配置
                     * @param OriginPullOptimization 跨国链路优化配置
                     */
                    void SetOriginPullOptimization(const OriginPullOptimization& _originPullOptimization);

                    /**
                     * 判断参数 OriginPullOptimization 是否已赋值
                     * @return OriginPullOptimization 是否已赋值
                     */
                    bool OriginPullOptimizationHasBeenSet() const;

                    /**
                     * 获取Https 加速配置
                     * @return Https Https 加速配置
                     */
                    Https GetHttps() const;

                    /**
                     * 设置Https 加速配置
                     * @param Https Https 加速配置
                     */
                    void SetHttps(const Https& _https);

                    /**
                     * 判断参数 Https 是否已赋值
                     * @return Https 是否已赋值
                     */
                    bool HttpsHasBeenSet() const;

                    /**
                     * 获取时间戳防盗链配置
                     * @return Authentication 时间戳防盗链配置
                     */
                    Authentication GetAuthentication() const;

                    /**
                     * 设置时间戳防盗链配置
                     * @param Authentication 时间戳防盗链配置
                     */
                    void SetAuthentication(const Authentication& _authentication);

                    /**
                     * 判断参数 Authentication 是否已赋值
                     * @return Authentication 是否已赋值
                     */
                    bool AuthenticationHasBeenSet() const;

                    /**
                     * 获取SEO 优化配置
                     * @return Seo SEO 优化配置
                     */
                    Seo GetSeo() const;

                    /**
                     * 设置SEO 优化配置
                     * @param Seo SEO 优化配置
                     */
                    void SetSeo(const Seo& _seo);

                    /**
                     * 判断参数 Seo 是否已赋值
                     * @return Seo 是否已赋值
                     */
                    bool SeoHasBeenSet() const;

                    /**
                     * 获取访问协议强制跳转配置
                     * @return ForceRedirect 访问协议强制跳转配置
                     */
                    ForceRedirect GetForceRedirect() const;

                    /**
                     * 设置访问协议强制跳转配置
                     * @param ForceRedirect 访问协议强制跳转配置
                     */
                    void SetForceRedirect(const ForceRedirect& _forceRedirect);

                    /**
                     * 判断参数 ForceRedirect 是否已赋值
                     * @return ForceRedirect 是否已赋值
                     */
                    bool ForceRedirectHasBeenSet() const;

                    /**
                     * 获取Referer 防盗链配置
                     * @return Referer Referer 防盗链配置
                     */
                    Referer GetReferer() const;

                    /**
                     * 设置Referer 防盗链配置
                     * @param Referer Referer 防盗链配置
                     */
                    void SetReferer(const Referer& _referer);

                    /**
                     * 判断参数 Referer 是否已赋值
                     * @return Referer 是否已赋值
                     */
                    bool RefererHasBeenSet() const;

                    /**
                     * 获取浏览器缓存配置（功能灰度中，尚未全量）
                     * @return MaxAge 浏览器缓存配置（功能灰度中，尚未全量）
                     */
                    MaxAge GetMaxAge() const;

                    /**
                     * 设置浏览器缓存配置（功能灰度中，尚未全量）
                     * @param MaxAge 浏览器缓存配置（功能灰度中，尚未全量）
                     */
                    void SetMaxAge(const MaxAge& _maxAge);

                    /**
                     * 判断参数 MaxAge 是否已赋值
                     * @return MaxAge 是否已赋值
                     */
                    bool MaxAgeHasBeenSet() const;

                    /**
                     * 获取Ipv6 配置（功能灰度中，尚未全量）
                     * @return Ipv6 Ipv6 配置（功能灰度中，尚未全量）
                     */
                    Ipv6 GetIpv6() const;

                    /**
                     * 设置Ipv6 配置（功能灰度中，尚未全量）
                     * @param Ipv6 Ipv6 配置（功能灰度中，尚未全量）
                     */
                    void SetIpv6(const Ipv6& _ipv6);

                    /**
                     * 判断参数 Ipv6 是否已赋值
                     * @return Ipv6 是否已赋值
                     */
                    bool Ipv6HasBeenSet() const;

                    /**
                     * 获取地域属性特殊配置
适用于域名境内加速、境外加速配置不一致场景
                     * @return SpecificConfig 地域属性特殊配置
适用于域名境内加速、境外加速配置不一致场景
                     */
                    SpecificConfig GetSpecificConfig() const;

                    /**
                     * 设置地域属性特殊配置
适用于域名境内加速、境外加速配置不一致场景
                     * @param SpecificConfig 地域属性特殊配置
适用于域名境内加速、境外加速配置不一致场景
                     */
                    void SetSpecificConfig(const SpecificConfig& _specificConfig);

                    /**
                     * 判断参数 SpecificConfig 是否已赋值
                     * @return SpecificConfig 是否已赋值
                     */
                    bool SpecificConfigHasBeenSet() const;

                    /**
                     * 获取域名加速区域
mainland：中国境内加速
overseas：中国境外加速
global：全球加速
使用中国境外加速、全球加速时，需要先开通中国境外加速服务
                     * @return Area 域名加速区域
mainland：中国境内加速
overseas：中国境外加速
global：全球加速
使用中国境外加速、全球加速时，需要先开通中国境外加速服务
                     */
                    std::string GetArea() const;

                    /**
                     * 设置域名加速区域
mainland：中国境内加速
overseas：中国境外加速
global：全球加速
使用中国境外加速、全球加速时，需要先开通中国境外加速服务
                     * @param Area 域名加速区域
mainland：中国境内加速
overseas：中国境外加速
global：全球加速
使用中国境外加速、全球加速时，需要先开通中国境外加速服务
                     */
                    void SetArea(const std::string& _area);

                    /**
                     * 判断参数 Area 是否已赋值
                     * @return Area 是否已赋值
                     */
                    bool AreaHasBeenSet() const;

                private:

                    /**
                     * 域名
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * 加速域名业务类型
web：静态加速
download：下载加速
media：流媒体点播加速
                     */
                    std::string m_serviceType;
                    bool m_serviceTypeHasBeenSet;

                    /**
                     * 源站配置
                     */
                    Origin m_origin;
                    bool m_originHasBeenSet;

                    /**
                     * 项目 ID，默认为 0，代表【默认项目】
                     */
                    int64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * IP 黑白名单配置
                     */
                    IpFilter m_ipFilter;
                    bool m_ipFilterHasBeenSet;

                    /**
                     * IP 限频配置
                     */
                    IpFreqLimit m_ipFreqLimit;
                    bool m_ipFreqLimitHasBeenSet;

                    /**
                     * 状态码缓存配置
                     */
                    StatusCodeCache m_statusCodeCache;
                    bool m_statusCodeCacheHasBeenSet;

                    /**
                     * 智能压缩配置
                     */
                    Compression m_compression;
                    bool m_compressionHasBeenSet;

                    /**
                     * 带宽封顶配置
                     */
                    BandwidthAlert m_bandwidthAlert;
                    bool m_bandwidthAlertHasBeenSet;

                    /**
                     * Range 回源配置
                     */
                    RangeOriginPull m_rangeOriginPull;
                    bool m_rangeOriginPullHasBeenSet;

                    /**
                     * 301/302 回源跟随配置。
                     */
                    FollowRedirect m_followRedirect;
                    bool m_followRedirectHasBeenSet;

                    /**
                     * 错误码重定向配置（功能灰度中，尚未全量）
                     */
                    ErrorPage m_errorPage;
                    bool m_errorPageHasBeenSet;

                    /**
                     * 请求头部配置
                     */
                    RequestHeader m_requestHeader;
                    bool m_requestHeaderHasBeenSet;

                    /**
                     * 响应头部配置
                     */
                    ResponseHeader m_responseHeader;
                    bool m_responseHeaderHasBeenSet;

                    /**
                     * 下载速度配置
                     */
                    DownstreamCapping m_downstreamCapping;
                    bool m_downstreamCappingHasBeenSet;

                    /**
                     * 节点缓存键配置
                     */
                    CacheKey m_cacheKey;
                    bool m_cacheKeyHasBeenSet;

                    /**
                     * 头部缓存配置
                     */
                    ResponseHeaderCache m_responseHeaderCache;
                    bool m_responseHeaderCacheHasBeenSet;

                    /**
                     * 视频拖拽配置
                     */
                    VideoSeek m_videoSeek;
                    bool m_videoSeekHasBeenSet;

                    /**
                     * 缓存过期时间配置
                     */
                    Cache m_cache;
                    bool m_cacheHasBeenSet;

                    /**
                     * 跨国链路优化配置
                     */
                    OriginPullOptimization m_originPullOptimization;
                    bool m_originPullOptimizationHasBeenSet;

                    /**
                     * Https 加速配置
                     */
                    Https m_https;
                    bool m_httpsHasBeenSet;

                    /**
                     * 时间戳防盗链配置
                     */
                    Authentication m_authentication;
                    bool m_authenticationHasBeenSet;

                    /**
                     * SEO 优化配置
                     */
                    Seo m_seo;
                    bool m_seoHasBeenSet;

                    /**
                     * 访问协议强制跳转配置
                     */
                    ForceRedirect m_forceRedirect;
                    bool m_forceRedirectHasBeenSet;

                    /**
                     * Referer 防盗链配置
                     */
                    Referer m_referer;
                    bool m_refererHasBeenSet;

                    /**
                     * 浏览器缓存配置（功能灰度中，尚未全量）
                     */
                    MaxAge m_maxAge;
                    bool m_maxAgeHasBeenSet;

                    /**
                     * Ipv6 配置（功能灰度中，尚未全量）
                     */
                    Ipv6 m_ipv6;
                    bool m_ipv6HasBeenSet;

                    /**
                     * 地域属性特殊配置
适用于域名境内加速、境外加速配置不一致场景
                     */
                    SpecificConfig m_specificConfig;
                    bool m_specificConfigHasBeenSet;

                    /**
                     * 域名加速区域
mainland：中国境内加速
overseas：中国境外加速
global：全球加速
使用中国境外加速、全球加速时，需要先开通中国境外加速服务
                     */
                    std::string m_area;
                    bool m_areaHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_ADDCDNDOMAINREQUEST_H_