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

#ifndef TENCENTCLOUD_TSF_V20180326_MODEL_CREATECLUSTERREQUEST_H_
#define TENCENTCLOUD_TSF_V20180326_MODEL_CREATECLUSTERREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tsf
    {
        namespace V20180326
        {
            namespace Model
            {
                /**
                * CreateCluster请求参数结构体
                */
                class CreateClusterRequest : public AbstractModel
                {
                public:
                    CreateClusterRequest();
                    ~CreateClusterRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取集群名称
                     * @return ClusterName 集群名称
                     */
                    std::string GetClusterName() const;

                    /**
                     * 设置集群名称
                     * @param ClusterName 集群名称
                     */
                    void SetClusterName(const std::string& _clusterName);

                    /**
                     * 判断参数 ClusterName 是否已赋值
                     * @return ClusterName 是否已赋值
                     */
                    bool ClusterNameHasBeenSet() const;

                    /**
                     * 获取集群类型
                     * @return ClusterType 集群类型
                     */
                    std::string GetClusterType() const;

                    /**
                     * 设置集群类型
                     * @param ClusterType 集群类型
                     */
                    void SetClusterType(const std::string& _clusterType);

                    /**
                     * 判断参数 ClusterType 是否已赋值
                     * @return ClusterType 是否已赋值
                     */
                    bool ClusterTypeHasBeenSet() const;

                    /**
                     * 获取私有网络ID
                     * @return VpcId 私有网络ID
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置私有网络ID
                     * @param VpcId 私有网络ID
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取分配给集群容器和服务IP的CIDR
                     * @return ClusterCIDR 分配给集群容器和服务IP的CIDR
                     */
                    std::string GetClusterCIDR() const;

                    /**
                     * 设置分配给集群容器和服务IP的CIDR
                     * @param ClusterCIDR 分配给集群容器和服务IP的CIDR
                     */
                    void SetClusterCIDR(const std::string& _clusterCIDR);

                    /**
                     * 判断参数 ClusterCIDR 是否已赋值
                     * @return ClusterCIDR 是否已赋值
                     */
                    bool ClusterCIDRHasBeenSet() const;

                    /**
                     * 获取集群备注
                     * @return ClusterDesc 集群备注
                     */
                    std::string GetClusterDesc() const;

                    /**
                     * 设置集群备注
                     * @param ClusterDesc 集群备注
                     */
                    void SetClusterDesc(const std::string& _clusterDesc);

                    /**
                     * 判断参数 ClusterDesc 是否已赋值
                     * @return ClusterDesc 是否已赋值
                     */
                    bool ClusterDescHasBeenSet() const;

                    /**
                     * 获取集群所属TSF地域
                     * @return TsfRegionId 集群所属TSF地域
                     */
                    std::string GetTsfRegionId() const;

                    /**
                     * 设置集群所属TSF地域
                     * @param TsfRegionId 集群所属TSF地域
                     */
                    void SetTsfRegionId(const std::string& _tsfRegionId);

                    /**
                     * 判断参数 TsfRegionId 是否已赋值
                     * @return TsfRegionId 是否已赋值
                     */
                    bool TsfRegionIdHasBeenSet() const;

                    /**
                     * 获取集群所属TSF可用区
                     * @return TsfZoneId 集群所属TSF可用区
                     */
                    std::string GetTsfZoneId() const;

                    /**
                     * 设置集群所属TSF可用区
                     * @param TsfZoneId 集群所属TSF可用区
                     */
                    void SetTsfZoneId(const std::string& _tsfZoneId);

                    /**
                     * 判断参数 TsfZoneId 是否已赋值
                     * @return TsfZoneId 是否已赋值
                     */
                    bool TsfZoneIdHasBeenSet() const;

                    /**
                     * 获取私有网络子网ID
                     * @return SubnetId 私有网络子网ID
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置私有网络子网ID
                     * @param SubnetId 私有网络子网ID
                     */
                    void SetSubnetId(const std::string& _subnetId);

                    /**
                     * 判断参数 SubnetId 是否已赋值
                     * @return SubnetId 是否已赋值
                     */
                    bool SubnetIdHasBeenSet() const;

                private:

                    /**
                     * 集群名称
                     */
                    std::string m_clusterName;
                    bool m_clusterNameHasBeenSet;

                    /**
                     * 集群类型
                     */
                    std::string m_clusterType;
                    bool m_clusterTypeHasBeenSet;

                    /**
                     * 私有网络ID
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 分配给集群容器和服务IP的CIDR
                     */
                    std::string m_clusterCIDR;
                    bool m_clusterCIDRHasBeenSet;

                    /**
                     * 集群备注
                     */
                    std::string m_clusterDesc;
                    bool m_clusterDescHasBeenSet;

                    /**
                     * 集群所属TSF地域
                     */
                    std::string m_tsfRegionId;
                    bool m_tsfRegionIdHasBeenSet;

                    /**
                     * 集群所属TSF可用区
                     */
                    std::string m_tsfZoneId;
                    bool m_tsfZoneIdHasBeenSet;

                    /**
                     * 私有网络子网ID
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_CREATECLUSTERREQUEST_H_
