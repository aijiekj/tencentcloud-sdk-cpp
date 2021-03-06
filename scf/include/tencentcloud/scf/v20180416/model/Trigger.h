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

#ifndef TENCENTCLOUD_SCF_V20180416_MODEL_TRIGGER_H_
#define TENCENTCLOUD_SCF_V20180416_MODEL_TRIGGER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Scf
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * 触发器类型
                */
                class Trigger : public AbstractModel
                {
                public:
                    Trigger();
                    ~Trigger() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取触发器最后修改时间
                     * @return ModTime 触发器最后修改时间
                     */
                    std::string GetModTime() const;

                    /**
                     * 设置触发器最后修改时间
                     * @param ModTime 触发器最后修改时间
                     */
                    void SetModTime(const std::string& _modTime);

                    /**
                     * 判断参数 ModTime 是否已赋值
                     * @return ModTime 是否已赋值
                     */
                    bool ModTimeHasBeenSet() const;

                    /**
                     * 获取触发器类型
                     * @return Type 触发器类型
                     */
                    std::string GetType() const;

                    /**
                     * 设置触发器类型
                     * @param Type 触发器类型
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取触发器详细配置
                     * @return TriggerDesc 触发器详细配置
                     */
                    std::string GetTriggerDesc() const;

                    /**
                     * 设置触发器详细配置
                     * @param TriggerDesc 触发器详细配置
                     */
                    void SetTriggerDesc(const std::string& _triggerDesc);

                    /**
                     * 判断参数 TriggerDesc 是否已赋值
                     * @return TriggerDesc 是否已赋值
                     */
                    bool TriggerDescHasBeenSet() const;

                    /**
                     * 获取触发器名称
                     * @return TriggerName 触发器名称
                     */
                    std::string GetTriggerName() const;

                    /**
                     * 设置触发器名称
                     * @param TriggerName 触发器名称
                     */
                    void SetTriggerName(const std::string& _triggerName);

                    /**
                     * 判断参数 TriggerName 是否已赋值
                     * @return TriggerName 是否已赋值
                     */
                    bool TriggerNameHasBeenSet() const;

                    /**
                     * 获取触发器创建时间
                     * @return AddTime 触发器创建时间
                     */
                    std::string GetAddTime() const;

                    /**
                     * 设置触发器创建时间
                     * @param AddTime 触发器创建时间
                     */
                    void SetAddTime(const std::string& _addTime);

                    /**
                     * 判断参数 AddTime 是否已赋值
                     * @return AddTime 是否已赋值
                     */
                    bool AddTimeHasBeenSet() const;

                    /**
                     * 获取使能开关
                     * @return Enable 使能开关
                     */
                    int64_t GetEnable() const;

                    /**
                     * 设置使能开关
                     * @param Enable 使能开关
                     */
                    void SetEnable(const int64_t& _enable);

                    /**
                     * 判断参数 Enable 是否已赋值
                     * @return Enable 是否已赋值
                     */
                    bool EnableHasBeenSet() const;

                    /**
                     * 获取客户自定义参数
                     * @return CustomArgument 客户自定义参数
                     */
                    std::string GetCustomArgument() const;

                    /**
                     * 设置客户自定义参数
                     * @param CustomArgument 客户自定义参数
                     */
                    void SetCustomArgument(const std::string& _customArgument);

                    /**
                     * 判断参数 CustomArgument 是否已赋值
                     * @return CustomArgument 是否已赋值
                     */
                    bool CustomArgumentHasBeenSet() const;

                private:

                    /**
                     * 触发器最后修改时间
                     */
                    std::string m_modTime;
                    bool m_modTimeHasBeenSet;

                    /**
                     * 触发器类型
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 触发器详细配置
                     */
                    std::string m_triggerDesc;
                    bool m_triggerDescHasBeenSet;

                    /**
                     * 触发器名称
                     */
                    std::string m_triggerName;
                    bool m_triggerNameHasBeenSet;

                    /**
                     * 触发器创建时间
                     */
                    std::string m_addTime;
                    bool m_addTimeHasBeenSet;

                    /**
                     * 使能开关
                     */
                    int64_t m_enable;
                    bool m_enableHasBeenSet;

                    /**
                     * 客户自定义参数
                     */
                    std::string m_customArgument;
                    bool m_customArgumentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SCF_V20180416_MODEL_TRIGGER_H_
