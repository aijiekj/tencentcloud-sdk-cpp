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

#ifndef TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_SELECTEDTABLEINFO_H_
#define TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_SELECTEDTABLEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcaplusdb
    {
        namespace V20190823
        {
            namespace Model
            {
                /**
                * 被选中的表信息
                */
                class SelectedTableInfo : public AbstractModel
                {
                public:
                    SelectedTableInfo();
                    ~SelectedTableInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取表所属大区ID
                     * @return LogicZoneId 表所属大区ID
                     */
                    std::string GetLogicZoneId() const;

                    /**
                     * 设置表所属大区ID
                     * @param LogicZoneId 表所属大区ID
                     */
                    void SetLogicZoneId(const std::string& _logicZoneId);

                    /**
                     * 判断参数 LogicZoneId 是否已赋值
                     * @return LogicZoneId 是否已赋值
                     */
                    bool LogicZoneIdHasBeenSet() const;

                    /**
                     * 获取表名称
                     * @return TableName 表名称
                     */
                    std::string GetTableName() const;

                    /**
                     * 设置表名称
                     * @param TableName 表名称
                     */
                    void SetTableName(const std::string& _tableName);

                    /**
                     * 判断参数 TableName 是否已赋值
                     * @return TableName 是否已赋值
                     */
                    bool TableNameHasBeenSet() const;

                    /**
                     * 获取表实例ID
                     * @return TableInstanceId 表实例ID
                     */
                    std::string GetTableInstanceId() const;

                    /**
                     * 设置表实例ID
                     * @param TableInstanceId 表实例ID
                     */
                    void SetTableInstanceId(const std::string& _tableInstanceId);

                    /**
                     * 判断参数 TableInstanceId 是否已赋值
                     * @return TableInstanceId 是否已赋值
                     */
                    bool TableInstanceIdHasBeenSet() const;

                    /**
                     * 获取表描述语言类型：`PROTO`或`TDR`
                     * @return TableIdlType 表描述语言类型：`PROTO`或`TDR`
                     */
                    std::string GetTableIdlType() const;

                    /**
                     * 设置表描述语言类型：`PROTO`或`TDR`
                     * @param TableIdlType 表描述语言类型：`PROTO`或`TDR`
                     */
                    void SetTableIdlType(const std::string& _tableIdlType);

                    /**
                     * 判断参数 TableIdlType 是否已赋值
                     * @return TableIdlType 是否已赋值
                     */
                    bool TableIdlTypeHasBeenSet() const;

                    /**
                     * 获取表数据结构类型：`GENERIC`或`LIST`
                     * @return TableType 表数据结构类型：`GENERIC`或`LIST`
                     */
                    std::string GetTableType() const;

                    /**
                     * 设置表数据结构类型：`GENERIC`或`LIST`
                     * @param TableType 表数据结构类型：`GENERIC`或`LIST`
                     */
                    void SetTableType(const std::string& _tableType);

                    /**
                     * 判断参数 TableType 是否已赋值
                     * @return TableType 是否已赋值
                     */
                    bool TableTypeHasBeenSet() const;

                    /**
                     * 获取LIST表元素个数
                     * @return ListElementNum LIST表元素个数
                     */
                    int64_t GetListElementNum() const;

                    /**
                     * 设置LIST表元素个数
                     * @param ListElementNum LIST表元素个数
                     */
                    void SetListElementNum(const int64_t& _listElementNum);

                    /**
                     * 判断参数 ListElementNum 是否已赋值
                     * @return ListElementNum 是否已赋值
                     */
                    bool ListElementNumHasBeenSet() const;

                    /**
                     * 获取表预留容量（GB）
                     * @return ReservedVolume 表预留容量（GB）
                     */
                    int64_t GetReservedVolume() const;

                    /**
                     * 设置表预留容量（GB）
                     * @param ReservedVolume 表预留容量（GB）
                     */
                    void SetReservedVolume(const int64_t& _reservedVolume);

                    /**
                     * 判断参数 ReservedVolume 是否已赋值
                     * @return ReservedVolume 是否已赋值
                     */
                    bool ReservedVolumeHasBeenSet() const;

                    /**
                     * 获取表预留读QPS
                     * @return ReservedReadQps 表预留读QPS
                     */
                    int64_t GetReservedReadQps() const;

                    /**
                     * 设置表预留读QPS
                     * @param ReservedReadQps 表预留读QPS
                     */
                    void SetReservedReadQps(const int64_t& _reservedReadQps);

                    /**
                     * 判断参数 ReservedReadQps 是否已赋值
                     * @return ReservedReadQps 是否已赋值
                     */
                    bool ReservedReadQpsHasBeenSet() const;

                    /**
                     * 获取表预留写QPS
                     * @return ReservedWriteQps 表预留写QPS
                     */
                    int64_t GetReservedWriteQps() const;

                    /**
                     * 设置表预留写QPS
                     * @param ReservedWriteQps 表预留写QPS
                     */
                    void SetReservedWriteQps(const int64_t& _reservedWriteQps);

                    /**
                     * 判断参数 ReservedWriteQps 是否已赋值
                     * @return ReservedWriteQps 是否已赋值
                     */
                    bool ReservedWriteQpsHasBeenSet() const;

                    /**
                     * 获取表备注信息
                     * @return Memo 表备注信息
                     */
                    std::string GetMemo() const;

                    /**
                     * 设置表备注信息
                     * @param Memo 表备注信息
                     */
                    void SetMemo(const std::string& _memo);

                    /**
                     * 判断参数 Memo 是否已赋值
                     * @return Memo 是否已赋值
                     */
                    bool MemoHasBeenSet() const;

                    /**
                     * 获取Key回档文件名，回档专用
                     * @return FileName Key回档文件名，回档专用
                     */
                    std::string GetFileName() const;

                    /**
                     * 设置Key回档文件名，回档专用
                     * @param FileName Key回档文件名，回档专用
                     */
                    void SetFileName(const std::string& _fileName);

                    /**
                     * 判断参数 FileName 是否已赋值
                     * @return FileName 是否已赋值
                     */
                    bool FileNameHasBeenSet() const;

                    /**
                     * 获取Key回档文件扩展名，回档专用
                     * @return FileExtType Key回档文件扩展名，回档专用
                     */
                    std::string GetFileExtType() const;

                    /**
                     * 设置Key回档文件扩展名，回档专用
                     * @param FileExtType Key回档文件扩展名，回档专用
                     */
                    void SetFileExtType(const std::string& _fileExtType);

                    /**
                     * 判断参数 FileExtType 是否已赋值
                     * @return FileExtType 是否已赋值
                     */
                    bool FileExtTypeHasBeenSet() const;

                    /**
                     * 获取Key回档文件大小，回档专用
                     * @return FileSize Key回档文件大小，回档专用
                     */
                    int64_t GetFileSize() const;

                    /**
                     * 设置Key回档文件大小，回档专用
                     * @param FileSize Key回档文件大小，回档专用
                     */
                    void SetFileSize(const int64_t& _fileSize);

                    /**
                     * 判断参数 FileSize 是否已赋值
                     * @return FileSize 是否已赋值
                     */
                    bool FileSizeHasBeenSet() const;

                    /**
                     * 获取Key回档文件内容，回档专用
                     * @return FileContent Key回档文件内容，回档专用
                     */
                    std::string GetFileContent() const;

                    /**
                     * 设置Key回档文件内容，回档专用
                     * @param FileContent Key回档文件内容，回档专用
                     */
                    void SetFileContent(const std::string& _fileContent);

                    /**
                     * 判断参数 FileContent 是否已赋值
                     * @return FileContent 是否已赋值
                     */
                    bool FileContentHasBeenSet() const;

                private:

                    /**
                     * 表所属大区ID
                     */
                    std::string m_logicZoneId;
                    bool m_logicZoneIdHasBeenSet;

                    /**
                     * 表名称
                     */
                    std::string m_tableName;
                    bool m_tableNameHasBeenSet;

                    /**
                     * 表实例ID
                     */
                    std::string m_tableInstanceId;
                    bool m_tableInstanceIdHasBeenSet;

                    /**
                     * 表描述语言类型：`PROTO`或`TDR`
                     */
                    std::string m_tableIdlType;
                    bool m_tableIdlTypeHasBeenSet;

                    /**
                     * 表数据结构类型：`GENERIC`或`LIST`
                     */
                    std::string m_tableType;
                    bool m_tableTypeHasBeenSet;

                    /**
                     * LIST表元素个数
                     */
                    int64_t m_listElementNum;
                    bool m_listElementNumHasBeenSet;

                    /**
                     * 表预留容量（GB）
                     */
                    int64_t m_reservedVolume;
                    bool m_reservedVolumeHasBeenSet;

                    /**
                     * 表预留读QPS
                     */
                    int64_t m_reservedReadQps;
                    bool m_reservedReadQpsHasBeenSet;

                    /**
                     * 表预留写QPS
                     */
                    int64_t m_reservedWriteQps;
                    bool m_reservedWriteQpsHasBeenSet;

                    /**
                     * 表备注信息
                     */
                    std::string m_memo;
                    bool m_memoHasBeenSet;

                    /**
                     * Key回档文件名，回档专用
                     */
                    std::string m_fileName;
                    bool m_fileNameHasBeenSet;

                    /**
                     * Key回档文件扩展名，回档专用
                     */
                    std::string m_fileExtType;
                    bool m_fileExtTypeHasBeenSet;

                    /**
                     * Key回档文件大小，回档专用
                     */
                    int64_t m_fileSize;
                    bool m_fileSizeHasBeenSet;

                    /**
                     * Key回档文件内容，回档专用
                     */
                    std::string m_fileContent;
                    bool m_fileContentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_SELECTEDTABLEINFO_H_
