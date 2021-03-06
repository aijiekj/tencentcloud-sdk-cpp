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

#include <tencentcloud/tag/v20180813/TagClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Tag::V20180813;
using namespace TencentCloud::Tag::V20180813::Model;
using namespace std;

namespace
{
    const string VERSION = "2018-08-13";
    const string ENDPOINT = "tag.tencentcloudapi.com";
}

TagClient::TagClient(const Credential &credential, const string &region) :
    TagClient(credential, region, ClientProfile())
{
}

TagClient::TagClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


TagClient::AddResourceTagOutcome TagClient::AddResourceTag(const AddResourceTagRequest &request)
{
    auto outcome = MakeRequest(request, "AddResourceTag");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AddResourceTagResponse rsp = AddResourceTagResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AddResourceTagOutcome(rsp);
        else
            return AddResourceTagOutcome(o.GetError());
    }
    else
    {
        return AddResourceTagOutcome(outcome.GetError());
    }
}

void TagClient::AddResourceTagAsync(const AddResourceTagRequest& request, const AddResourceTagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->AddResourceTag(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TagClient::AddResourceTagOutcomeCallable TagClient::AddResourceTagCallable(const AddResourceTagRequest &request)
{
    auto task = std::make_shared<std::packaged_task<AddResourceTagOutcome()>>(
        [this, request]()
        {
            return this->AddResourceTag(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TagClient::CreateTagOutcome TagClient::CreateTag(const CreateTagRequest &request)
{
    auto outcome = MakeRequest(request, "CreateTag");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateTagResponse rsp = CreateTagResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateTagOutcome(rsp);
        else
            return CreateTagOutcome(o.GetError());
    }
    else
    {
        return CreateTagOutcome(outcome.GetError());
    }
}

void TagClient::CreateTagAsync(const CreateTagRequest& request, const CreateTagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateTag(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TagClient::CreateTagOutcomeCallable TagClient::CreateTagCallable(const CreateTagRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateTagOutcome()>>(
        [this, request]()
        {
            return this->CreateTag(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TagClient::DeleteResourceTagOutcome TagClient::DeleteResourceTag(const DeleteResourceTagRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteResourceTag");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteResourceTagResponse rsp = DeleteResourceTagResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteResourceTagOutcome(rsp);
        else
            return DeleteResourceTagOutcome(o.GetError());
    }
    else
    {
        return DeleteResourceTagOutcome(outcome.GetError());
    }
}

void TagClient::DeleteResourceTagAsync(const DeleteResourceTagRequest& request, const DeleteResourceTagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteResourceTag(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TagClient::DeleteResourceTagOutcomeCallable TagClient::DeleteResourceTagCallable(const DeleteResourceTagRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteResourceTagOutcome()>>(
        [this, request]()
        {
            return this->DeleteResourceTag(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TagClient::DeleteTagOutcome TagClient::DeleteTag(const DeleteTagRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteTag");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteTagResponse rsp = DeleteTagResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteTagOutcome(rsp);
        else
            return DeleteTagOutcome(o.GetError());
    }
    else
    {
        return DeleteTagOutcome(outcome.GetError());
    }
}

void TagClient::DeleteTagAsync(const DeleteTagRequest& request, const DeleteTagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteTag(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TagClient::DeleteTagOutcomeCallable TagClient::DeleteTagCallable(const DeleteTagRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteTagOutcome()>>(
        [this, request]()
        {
            return this->DeleteTag(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TagClient::DescribeResourceTagsByResourceIdsOutcome TagClient::DescribeResourceTagsByResourceIds(const DescribeResourceTagsByResourceIdsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeResourceTagsByResourceIds");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeResourceTagsByResourceIdsResponse rsp = DescribeResourceTagsByResourceIdsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeResourceTagsByResourceIdsOutcome(rsp);
        else
            return DescribeResourceTagsByResourceIdsOutcome(o.GetError());
    }
    else
    {
        return DescribeResourceTagsByResourceIdsOutcome(outcome.GetError());
    }
}

void TagClient::DescribeResourceTagsByResourceIdsAsync(const DescribeResourceTagsByResourceIdsRequest& request, const DescribeResourceTagsByResourceIdsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeResourceTagsByResourceIds(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TagClient::DescribeResourceTagsByResourceIdsOutcomeCallable TagClient::DescribeResourceTagsByResourceIdsCallable(const DescribeResourceTagsByResourceIdsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeResourceTagsByResourceIdsOutcome()>>(
        [this, request]()
        {
            return this->DescribeResourceTagsByResourceIds(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TagClient::DescribeResourcesByTagsOutcome TagClient::DescribeResourcesByTags(const DescribeResourcesByTagsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeResourcesByTags");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeResourcesByTagsResponse rsp = DescribeResourcesByTagsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeResourcesByTagsOutcome(rsp);
        else
            return DescribeResourcesByTagsOutcome(o.GetError());
    }
    else
    {
        return DescribeResourcesByTagsOutcome(outcome.GetError());
    }
}

void TagClient::DescribeResourcesByTagsAsync(const DescribeResourcesByTagsRequest& request, const DescribeResourcesByTagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeResourcesByTags(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TagClient::DescribeResourcesByTagsOutcomeCallable TagClient::DescribeResourcesByTagsCallable(const DescribeResourcesByTagsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeResourcesByTagsOutcome()>>(
        [this, request]()
        {
            return this->DescribeResourcesByTags(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TagClient::DescribeTagKeysOutcome TagClient::DescribeTagKeys(const DescribeTagKeysRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTagKeys");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTagKeysResponse rsp = DescribeTagKeysResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTagKeysOutcome(rsp);
        else
            return DescribeTagKeysOutcome(o.GetError());
    }
    else
    {
        return DescribeTagKeysOutcome(outcome.GetError());
    }
}

void TagClient::DescribeTagKeysAsync(const DescribeTagKeysRequest& request, const DescribeTagKeysAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTagKeys(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TagClient::DescribeTagKeysOutcomeCallable TagClient::DescribeTagKeysCallable(const DescribeTagKeysRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeTagKeysOutcome()>>(
        [this, request]()
        {
            return this->DescribeTagKeys(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TagClient::DescribeTagValuesOutcome TagClient::DescribeTagValues(const DescribeTagValuesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTagValues");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTagValuesResponse rsp = DescribeTagValuesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTagValuesOutcome(rsp);
        else
            return DescribeTagValuesOutcome(o.GetError());
    }
    else
    {
        return DescribeTagValuesOutcome(outcome.GetError());
    }
}

void TagClient::DescribeTagValuesAsync(const DescribeTagValuesRequest& request, const DescribeTagValuesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTagValues(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TagClient::DescribeTagValuesOutcomeCallable TagClient::DescribeTagValuesCallable(const DescribeTagValuesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeTagValuesOutcome()>>(
        [this, request]()
        {
            return this->DescribeTagValues(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TagClient::DescribeTagsOutcome TagClient::DescribeTags(const DescribeTagsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTags");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTagsResponse rsp = DescribeTagsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTagsOutcome(rsp);
        else
            return DescribeTagsOutcome(o.GetError());
    }
    else
    {
        return DescribeTagsOutcome(outcome.GetError());
    }
}

void TagClient::DescribeTagsAsync(const DescribeTagsRequest& request, const DescribeTagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTags(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TagClient::DescribeTagsOutcomeCallable TagClient::DescribeTagsCallable(const DescribeTagsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeTagsOutcome()>>(
        [this, request]()
        {
            return this->DescribeTags(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TagClient::ModifyResourceTagsOutcome TagClient::ModifyResourceTags(const ModifyResourceTagsRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyResourceTags");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyResourceTagsResponse rsp = ModifyResourceTagsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyResourceTagsOutcome(rsp);
        else
            return ModifyResourceTagsOutcome(o.GetError());
    }
    else
    {
        return ModifyResourceTagsOutcome(outcome.GetError());
    }
}

void TagClient::ModifyResourceTagsAsync(const ModifyResourceTagsRequest& request, const ModifyResourceTagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyResourceTags(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TagClient::ModifyResourceTagsOutcomeCallable TagClient::ModifyResourceTagsCallable(const ModifyResourceTagsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyResourceTagsOutcome()>>(
        [this, request]()
        {
            return this->ModifyResourceTags(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TagClient::UpdateResourceTagValueOutcome TagClient::UpdateResourceTagValue(const UpdateResourceTagValueRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateResourceTagValue");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateResourceTagValueResponse rsp = UpdateResourceTagValueResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateResourceTagValueOutcome(rsp);
        else
            return UpdateResourceTagValueOutcome(o.GetError());
    }
    else
    {
        return UpdateResourceTagValueOutcome(outcome.GetError());
    }
}

void TagClient::UpdateResourceTagValueAsync(const UpdateResourceTagValueRequest& request, const UpdateResourceTagValueAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UpdateResourceTagValue(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TagClient::UpdateResourceTagValueOutcomeCallable TagClient::UpdateResourceTagValueCallable(const UpdateResourceTagValueRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UpdateResourceTagValueOutcome()>>(
        [this, request]()
        {
            return this->UpdateResourceTagValue(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

