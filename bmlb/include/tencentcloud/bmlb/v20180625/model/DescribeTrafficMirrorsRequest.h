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

#ifndef TENCENTCLOUD_BMLB_V20180625_MODEL_DESCRIBETRAFFICMIRRORSREQUEST_H_
#define TENCENTCLOUD_BMLB_V20180625_MODEL_DESCRIBETRAFFICMIRRORSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bmlb
    {
        namespace V20180625
        {
            namespace Model
            {
                /**
                * DescribeTrafficMirrors请求参数结构体
                */
                class DescribeTrafficMirrorsRequest : public AbstractModel
                {
                public:
                    DescribeTrafficMirrorsRequest();
                    ~DescribeTrafficMirrorsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取流量镜像实例ID的数组，支持批量查询
                     * @return TrafficMirrorIds 流量镜像实例ID的数组，支持批量查询
                     */
                    std::vector<std::string> GetTrafficMirrorIds() const;

                    /**
                     * 设置流量镜像实例ID的数组，支持批量查询
                     * @param TrafficMirrorIds 流量镜像实例ID的数组，支持批量查询
                     */
                    void SetTrafficMirrorIds(const std::vector<std::string>& _trafficMirrorIds);

                    /**
                     * 判断参数 TrafficMirrorIds 是否已赋值
                     * @return TrafficMirrorIds 是否已赋值
                     */
                    bool TrafficMirrorIdsHasBeenSet() const;

                    /**
                     * 获取流量镜像实例别名数组。
                     * @return Aliases 流量镜像实例别名数组。
                     */
                    std::vector<std::string> GetAliases() const;

                    /**
                     * 设置流量镜像实例别名数组。
                     * @param Aliases 流量镜像实例别名数组。
                     */
                    void SetAliases(const std::vector<std::string>& _aliases);

                    /**
                     * 判断参数 Aliases 是否已赋值
                     * @return Aliases 是否已赋值
                     */
                    bool AliasesHasBeenSet() const;

                    /**
                     * 获取流量镜像实例所属的私有网络ID数组，形如：vpc-xxx。
                     * @return VpcIds 流量镜像实例所属的私有网络ID数组，形如：vpc-xxx。
                     */
                    std::vector<std::string> GetVpcIds() const;

                    /**
                     * 设置流量镜像实例所属的私有网络ID数组，形如：vpc-xxx。
                     * @param VpcIds 流量镜像实例所属的私有网络ID数组，形如：vpc-xxx。
                     */
                    void SetVpcIds(const std::vector<std::string>& _vpcIds);

                    /**
                     * 判断参数 VpcIds 是否已赋值
                     * @return VpcIds 是否已赋值
                     */
                    bool VpcIdsHasBeenSet() const;

                    /**
                     * 获取分页的偏移量，也即从第几条记录开始查询
                     * @return Offset 分页的偏移量，也即从第几条记录开始查询
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置分页的偏移量，也即从第几条记录开始查询
                     * @param Offset 分页的偏移量，也即从第几条记录开始查询
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取单次查询返回的条目数，默认值：500。
                     * @return Limit 单次查询返回的条目数，默认值：500。
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置单次查询返回的条目数，默认值：500。
                     * @param Limit 单次查询返回的条目数，默认值：500。
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     */
                    bool LimitHasBeenSet() const;

                private:

                    /**
                     * 流量镜像实例ID的数组，支持批量查询
                     */
                    std::vector<std::string> m_trafficMirrorIds;
                    bool m_trafficMirrorIdsHasBeenSet;

                    /**
                     * 流量镜像实例别名数组。
                     */
                    std::vector<std::string> m_aliases;
                    bool m_aliasesHasBeenSet;

                    /**
                     * 流量镜像实例所属的私有网络ID数组，形如：vpc-xxx。
                     */
                    std::vector<std::string> m_vpcIds;
                    bool m_vpcIdsHasBeenSet;

                    /**
                     * 分页的偏移量，也即从第几条记录开始查询
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 单次查询返回的条目数，默认值：500。
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BMLB_V20180625_MODEL_DESCRIBETRAFFICMIRRORSREQUEST_H_
