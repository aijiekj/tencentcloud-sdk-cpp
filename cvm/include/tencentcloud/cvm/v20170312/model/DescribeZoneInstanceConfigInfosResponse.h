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

#ifndef TENCENTCLOUD_CVM_V20170312_MODEL_DESCRIBEZONEINSTANCECONFIGINFOSRESPONSE_H_
#define TENCENTCLOUD_CVM_V20170312_MODEL_DESCRIBEZONEINSTANCECONFIGINFOSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cvm/v20170312/model/InstanceTypeQuotaItem.h>


namespace TencentCloud
{
    namespace Cvm
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * DescribeZoneInstanceConfigInfos返回参数结构体
                */
                class DescribeZoneInstanceConfigInfosResponse : public AbstractModel
                {
                public:
                    DescribeZoneInstanceConfigInfosResponse();
                    ~DescribeZoneInstanceConfigInfosResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);


                    /**
                     * 获取可用区机型配置列表。
                     * @return InstanceTypeQuotaSet 可用区机型配置列表。
                     */
                    std::vector<InstanceTypeQuotaItem> GetInstanceTypeQuotaSet() const;

                    /**
                     * 判断参数 InstanceTypeQuotaSet 是否已赋值
                     * @return InstanceTypeQuotaSet 是否已赋值
                     */
                    bool InstanceTypeQuotaSetHasBeenSet() const;

                private:

                    /**
                     * 可用区机型配置列表。
                     */
                    std::vector<InstanceTypeQuotaItem> m_instanceTypeQuotaSet;
                    bool m_instanceTypeQuotaSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CVM_V20170312_MODEL_DESCRIBEZONEINSTANCECONFIGINFOSRESPONSE_H_