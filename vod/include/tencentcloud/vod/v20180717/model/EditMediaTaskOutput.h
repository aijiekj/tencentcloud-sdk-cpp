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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_EDITMEDIATASKOUTPUT_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_EDITMEDIATASKOUTPUT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * 编辑视频任务的输出
                */
                class EditMediaTaskOutput : public AbstractModel
                {
                public:
                    EditMediaTaskOutput();
                    ~EditMediaTaskOutput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取文件类型，例如 mp4、flv 等。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FileType 文件类型，例如 mp4、flv 等。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetFileType() const;

                    /**
                     * 设置文件类型，例如 mp4、flv 等。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param FileType 文件类型，例如 mp4、flv 等。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetFileType(const std::string& _fileType);

                    /**
                     * 判断参数 FileType 是否已赋值
                     * @return FileType 是否已赋值
                     */
                    bool FileTypeHasBeenSet() const;

                    /**
                     * 获取媒体文件 ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FileId 媒体文件 ID。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetFileId() const;

                    /**
                     * 设置媒体文件 ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param FileId 媒体文件 ID。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetFileId(const std::string& _fileId);

                    /**
                     * 判断参数 FileId 是否已赋值
                     * @return FileId 是否已赋值
                     */
                    bool FileIdHasBeenSet() const;

                    /**
                     * 获取媒体文件播放地址。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FileUrl 媒体文件播放地址。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetFileUrl() const;

                    /**
                     * 设置媒体文件播放地址。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param FileUrl 媒体文件播放地址。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetFileUrl(const std::string& _fileUrl);

                    /**
                     * 判断参数 FileUrl 是否已赋值
                     * @return FileUrl 是否已赋值
                     */
                    bool FileUrlHasBeenSet() const;

                private:

                    /**
                     * 文件类型，例如 mp4、flv 等。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_fileType;
                    bool m_fileTypeHasBeenSet;

                    /**
                     * 媒体文件 ID。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_fileId;
                    bool m_fileIdHasBeenSet;

                    /**
                     * 媒体文件播放地址。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_fileUrl;
                    bool m_fileUrlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_EDITMEDIATASKOUTPUT_H_