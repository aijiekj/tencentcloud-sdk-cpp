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

#ifndef TENCENTCLOUD_POSTGRES_V20170312_POSTGRESCLIENT_H_
#define TENCENTCLOUD_POSTGRES_V20170312_POSTGRESCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/postgres/v20170312/model/CloseDBExtranetAccessRequest.h>
#include <tencentcloud/postgres/v20170312/model/CloseDBExtranetAccessResponse.h>
#include <tencentcloud/postgres/v20170312/model/CreateDBInstancesRequest.h>
#include <tencentcloud/postgres/v20170312/model/CreateDBInstancesResponse.h>
#include <tencentcloud/postgres/v20170312/model/DescribeAccountsRequest.h>
#include <tencentcloud/postgres/v20170312/model/DescribeAccountsResponse.h>
#include <tencentcloud/postgres/v20170312/model/DescribeDBBackupsRequest.h>
#include <tencentcloud/postgres/v20170312/model/DescribeDBBackupsResponse.h>
#include <tencentcloud/postgres/v20170312/model/DescribeDBErrlogsRequest.h>
#include <tencentcloud/postgres/v20170312/model/DescribeDBErrlogsResponse.h>
#include <tencentcloud/postgres/v20170312/model/DescribeDBInstanceAttributeRequest.h>
#include <tencentcloud/postgres/v20170312/model/DescribeDBInstanceAttributeResponse.h>
#include <tencentcloud/postgres/v20170312/model/DescribeDBInstancesRequest.h>
#include <tencentcloud/postgres/v20170312/model/DescribeDBInstancesResponse.h>
#include <tencentcloud/postgres/v20170312/model/DescribeDBSlowlogsRequest.h>
#include <tencentcloud/postgres/v20170312/model/DescribeDBSlowlogsResponse.h>
#include <tencentcloud/postgres/v20170312/model/DescribeDBXlogsRequest.h>
#include <tencentcloud/postgres/v20170312/model/DescribeDBXlogsResponse.h>
#include <tencentcloud/postgres/v20170312/model/DescribeOrdersRequest.h>
#include <tencentcloud/postgres/v20170312/model/DescribeOrdersResponse.h>
#include <tencentcloud/postgres/v20170312/model/DescribeProductConfigRequest.h>
#include <tencentcloud/postgres/v20170312/model/DescribeProductConfigResponse.h>
#include <tencentcloud/postgres/v20170312/model/DescribeRegionsRequest.h>
#include <tencentcloud/postgres/v20170312/model/DescribeRegionsResponse.h>
#include <tencentcloud/postgres/v20170312/model/DescribeZonesRequest.h>
#include <tencentcloud/postgres/v20170312/model/DescribeZonesResponse.h>
#include <tencentcloud/postgres/v20170312/model/InitDBInstancesRequest.h>
#include <tencentcloud/postgres/v20170312/model/InitDBInstancesResponse.h>
#include <tencentcloud/postgres/v20170312/model/InquiryPriceCreateDBInstancesRequest.h>
#include <tencentcloud/postgres/v20170312/model/InquiryPriceCreateDBInstancesResponse.h>
#include <tencentcloud/postgres/v20170312/model/InquiryPriceRenewDBInstanceRequest.h>
#include <tencentcloud/postgres/v20170312/model/InquiryPriceRenewDBInstanceResponse.h>
#include <tencentcloud/postgres/v20170312/model/InquiryPriceUpgradeDBInstanceRequest.h>
#include <tencentcloud/postgres/v20170312/model/InquiryPriceUpgradeDBInstanceResponse.h>
#include <tencentcloud/postgres/v20170312/model/ModifyAccountRemarkRequest.h>
#include <tencentcloud/postgres/v20170312/model/ModifyAccountRemarkResponse.h>
#include <tencentcloud/postgres/v20170312/model/ModifyDBInstanceNameRequest.h>
#include <tencentcloud/postgres/v20170312/model/ModifyDBInstanceNameResponse.h>
#include <tencentcloud/postgres/v20170312/model/ModifyDBInstancesProjectRequest.h>
#include <tencentcloud/postgres/v20170312/model/ModifyDBInstancesProjectResponse.h>
#include <tencentcloud/postgres/v20170312/model/OpenDBExtranetAccessRequest.h>
#include <tencentcloud/postgres/v20170312/model/OpenDBExtranetAccessResponse.h>
#include <tencentcloud/postgres/v20170312/model/RenewInstanceRequest.h>
#include <tencentcloud/postgres/v20170312/model/RenewInstanceResponse.h>
#include <tencentcloud/postgres/v20170312/model/ResetAccountPasswordRequest.h>
#include <tencentcloud/postgres/v20170312/model/ResetAccountPasswordResponse.h>
#include <tencentcloud/postgres/v20170312/model/RestartDBInstanceRequest.h>
#include <tencentcloud/postgres/v20170312/model/RestartDBInstanceResponse.h>
#include <tencentcloud/postgres/v20170312/model/SetAutoRenewFlagRequest.h>
#include <tencentcloud/postgres/v20170312/model/SetAutoRenewFlagResponse.h>
#include <tencentcloud/postgres/v20170312/model/UpgradeDBInstanceRequest.h>
#include <tencentcloud/postgres/v20170312/model/UpgradeDBInstanceResponse.h>


namespace TencentCloud
{
    namespace Postgres
    {
        namespace V20170312
        {
            class PostgresClient : public AbstractClient
            {
            public:
                PostgresClient(const Credential &credential, const std::string &region);
                PostgresClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Error, Model::CloseDBExtranetAccessResponse> CloseDBExtranetAccessOutcome;
                typedef std::future<CloseDBExtranetAccessOutcome> CloseDBExtranetAccessOutcomeCallable;
                typedef std::function<void(const PostgresClient*, const Model::CloseDBExtranetAccessRequest&, CloseDBExtranetAccessOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CloseDBExtranetAccessAsyncHandler;
                typedef Outcome<Error, Model::CreateDBInstancesResponse> CreateDBInstancesOutcome;
                typedef std::future<CreateDBInstancesOutcome> CreateDBInstancesOutcomeCallable;
                typedef std::function<void(const PostgresClient*, const Model::CreateDBInstancesRequest&, CreateDBInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateDBInstancesAsyncHandler;
                typedef Outcome<Error, Model::DescribeAccountsResponse> DescribeAccountsOutcome;
                typedef std::future<DescribeAccountsOutcome> DescribeAccountsOutcomeCallable;
                typedef std::function<void(const PostgresClient*, const Model::DescribeAccountsRequest&, DescribeAccountsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAccountsAsyncHandler;
                typedef Outcome<Error, Model::DescribeDBBackupsResponse> DescribeDBBackupsOutcome;
                typedef std::future<DescribeDBBackupsOutcome> DescribeDBBackupsOutcomeCallable;
                typedef std::function<void(const PostgresClient*, const Model::DescribeDBBackupsRequest&, DescribeDBBackupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBBackupsAsyncHandler;
                typedef Outcome<Error, Model::DescribeDBErrlogsResponse> DescribeDBErrlogsOutcome;
                typedef std::future<DescribeDBErrlogsOutcome> DescribeDBErrlogsOutcomeCallable;
                typedef std::function<void(const PostgresClient*, const Model::DescribeDBErrlogsRequest&, DescribeDBErrlogsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBErrlogsAsyncHandler;
                typedef Outcome<Error, Model::DescribeDBInstanceAttributeResponse> DescribeDBInstanceAttributeOutcome;
                typedef std::future<DescribeDBInstanceAttributeOutcome> DescribeDBInstanceAttributeOutcomeCallable;
                typedef std::function<void(const PostgresClient*, const Model::DescribeDBInstanceAttributeRequest&, DescribeDBInstanceAttributeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBInstanceAttributeAsyncHandler;
                typedef Outcome<Error, Model::DescribeDBInstancesResponse> DescribeDBInstancesOutcome;
                typedef std::future<DescribeDBInstancesOutcome> DescribeDBInstancesOutcomeCallable;
                typedef std::function<void(const PostgresClient*, const Model::DescribeDBInstancesRequest&, DescribeDBInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBInstancesAsyncHandler;
                typedef Outcome<Error, Model::DescribeDBSlowlogsResponse> DescribeDBSlowlogsOutcome;
                typedef std::future<DescribeDBSlowlogsOutcome> DescribeDBSlowlogsOutcomeCallable;
                typedef std::function<void(const PostgresClient*, const Model::DescribeDBSlowlogsRequest&, DescribeDBSlowlogsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBSlowlogsAsyncHandler;
                typedef Outcome<Error, Model::DescribeDBXlogsResponse> DescribeDBXlogsOutcome;
                typedef std::future<DescribeDBXlogsOutcome> DescribeDBXlogsOutcomeCallable;
                typedef std::function<void(const PostgresClient*, const Model::DescribeDBXlogsRequest&, DescribeDBXlogsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBXlogsAsyncHandler;
                typedef Outcome<Error, Model::DescribeOrdersResponse> DescribeOrdersOutcome;
                typedef std::future<DescribeOrdersOutcome> DescribeOrdersOutcomeCallable;
                typedef std::function<void(const PostgresClient*, const Model::DescribeOrdersRequest&, DescribeOrdersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeOrdersAsyncHandler;
                typedef Outcome<Error, Model::DescribeProductConfigResponse> DescribeProductConfigOutcome;
                typedef std::future<DescribeProductConfigOutcome> DescribeProductConfigOutcomeCallable;
                typedef std::function<void(const PostgresClient*, const Model::DescribeProductConfigRequest&, DescribeProductConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeProductConfigAsyncHandler;
                typedef Outcome<Error, Model::DescribeRegionsResponse> DescribeRegionsOutcome;
                typedef std::future<DescribeRegionsOutcome> DescribeRegionsOutcomeCallable;
                typedef std::function<void(const PostgresClient*, const Model::DescribeRegionsRequest&, DescribeRegionsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRegionsAsyncHandler;
                typedef Outcome<Error, Model::DescribeZonesResponse> DescribeZonesOutcome;
                typedef std::future<DescribeZonesOutcome> DescribeZonesOutcomeCallable;
                typedef std::function<void(const PostgresClient*, const Model::DescribeZonesRequest&, DescribeZonesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeZonesAsyncHandler;
                typedef Outcome<Error, Model::InitDBInstancesResponse> InitDBInstancesOutcome;
                typedef std::future<InitDBInstancesOutcome> InitDBInstancesOutcomeCallable;
                typedef std::function<void(const PostgresClient*, const Model::InitDBInstancesRequest&, InitDBInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> InitDBInstancesAsyncHandler;
                typedef Outcome<Error, Model::InquiryPriceCreateDBInstancesResponse> InquiryPriceCreateDBInstancesOutcome;
                typedef std::future<InquiryPriceCreateDBInstancesOutcome> InquiryPriceCreateDBInstancesOutcomeCallable;
                typedef std::function<void(const PostgresClient*, const Model::InquiryPriceCreateDBInstancesRequest&, InquiryPriceCreateDBInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> InquiryPriceCreateDBInstancesAsyncHandler;
                typedef Outcome<Error, Model::InquiryPriceRenewDBInstanceResponse> InquiryPriceRenewDBInstanceOutcome;
                typedef std::future<InquiryPriceRenewDBInstanceOutcome> InquiryPriceRenewDBInstanceOutcomeCallable;
                typedef std::function<void(const PostgresClient*, const Model::InquiryPriceRenewDBInstanceRequest&, InquiryPriceRenewDBInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> InquiryPriceRenewDBInstanceAsyncHandler;
                typedef Outcome<Error, Model::InquiryPriceUpgradeDBInstanceResponse> InquiryPriceUpgradeDBInstanceOutcome;
                typedef std::future<InquiryPriceUpgradeDBInstanceOutcome> InquiryPriceUpgradeDBInstanceOutcomeCallable;
                typedef std::function<void(const PostgresClient*, const Model::InquiryPriceUpgradeDBInstanceRequest&, InquiryPriceUpgradeDBInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> InquiryPriceUpgradeDBInstanceAsyncHandler;
                typedef Outcome<Error, Model::ModifyAccountRemarkResponse> ModifyAccountRemarkOutcome;
                typedef std::future<ModifyAccountRemarkOutcome> ModifyAccountRemarkOutcomeCallable;
                typedef std::function<void(const PostgresClient*, const Model::ModifyAccountRemarkRequest&, ModifyAccountRemarkOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAccountRemarkAsyncHandler;
                typedef Outcome<Error, Model::ModifyDBInstanceNameResponse> ModifyDBInstanceNameOutcome;
                typedef std::future<ModifyDBInstanceNameOutcome> ModifyDBInstanceNameOutcomeCallable;
                typedef std::function<void(const PostgresClient*, const Model::ModifyDBInstanceNameRequest&, ModifyDBInstanceNameOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDBInstanceNameAsyncHandler;
                typedef Outcome<Error, Model::ModifyDBInstancesProjectResponse> ModifyDBInstancesProjectOutcome;
                typedef std::future<ModifyDBInstancesProjectOutcome> ModifyDBInstancesProjectOutcomeCallable;
                typedef std::function<void(const PostgresClient*, const Model::ModifyDBInstancesProjectRequest&, ModifyDBInstancesProjectOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDBInstancesProjectAsyncHandler;
                typedef Outcome<Error, Model::OpenDBExtranetAccessResponse> OpenDBExtranetAccessOutcome;
                typedef std::future<OpenDBExtranetAccessOutcome> OpenDBExtranetAccessOutcomeCallable;
                typedef std::function<void(const PostgresClient*, const Model::OpenDBExtranetAccessRequest&, OpenDBExtranetAccessOutcome, const std::shared_ptr<const AsyncCallerContext>&)> OpenDBExtranetAccessAsyncHandler;
                typedef Outcome<Error, Model::RenewInstanceResponse> RenewInstanceOutcome;
                typedef std::future<RenewInstanceOutcome> RenewInstanceOutcomeCallable;
                typedef std::function<void(const PostgresClient*, const Model::RenewInstanceRequest&, RenewInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RenewInstanceAsyncHandler;
                typedef Outcome<Error, Model::ResetAccountPasswordResponse> ResetAccountPasswordOutcome;
                typedef std::future<ResetAccountPasswordOutcome> ResetAccountPasswordOutcomeCallable;
                typedef std::function<void(const PostgresClient*, const Model::ResetAccountPasswordRequest&, ResetAccountPasswordOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ResetAccountPasswordAsyncHandler;
                typedef Outcome<Error, Model::RestartDBInstanceResponse> RestartDBInstanceOutcome;
                typedef std::future<RestartDBInstanceOutcome> RestartDBInstanceOutcomeCallable;
                typedef std::function<void(const PostgresClient*, const Model::RestartDBInstanceRequest&, RestartDBInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RestartDBInstanceAsyncHandler;
                typedef Outcome<Error, Model::SetAutoRenewFlagResponse> SetAutoRenewFlagOutcome;
                typedef std::future<SetAutoRenewFlagOutcome> SetAutoRenewFlagOutcomeCallable;
                typedef std::function<void(const PostgresClient*, const Model::SetAutoRenewFlagRequest&, SetAutoRenewFlagOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SetAutoRenewFlagAsyncHandler;
                typedef Outcome<Error, Model::UpgradeDBInstanceResponse> UpgradeDBInstanceOutcome;
                typedef std::future<UpgradeDBInstanceOutcome> UpgradeDBInstanceOutcomeCallable;
                typedef std::function<void(const PostgresClient*, const Model::UpgradeDBInstanceRequest&, UpgradeDBInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpgradeDBInstanceAsyncHandler;



                /**
                 *本接口（CloseDBExtranetAccess）用于关闭实例外网链接。
                 * @param req CloseDBExtranetAccessRequest
                 * @return CloseDBExtranetAccessOutcome
                 */
                CloseDBExtranetAccessOutcome CloseDBExtranetAccess(const Model::CloseDBExtranetAccessRequest &request);
                void CloseDBExtranetAccessAsync(const Model::CloseDBExtranetAccessRequest& request, const CloseDBExtranetAccessAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CloseDBExtranetAccessOutcomeCallable CloseDBExtranetAccessCallable(const Model::CloseDBExtranetAccessRequest& request);

                /**
                 *本接口 (CreateDBInstances) 用于创建一个或者多个PostgreSQL实例。
                 * @param req CreateDBInstancesRequest
                 * @return CreateDBInstancesOutcome
                 */
                CreateDBInstancesOutcome CreateDBInstances(const Model::CreateDBInstancesRequest &request);
                void CreateDBInstancesAsync(const Model::CreateDBInstancesRequest& request, const CreateDBInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateDBInstancesOutcomeCallable CreateDBInstancesCallable(const Model::CreateDBInstancesRequest& request);

                /**
                 *本接口（DescribeAccounts）用于获取实例用户列表。
                 * @param req DescribeAccountsRequest
                 * @return DescribeAccountsOutcome
                 */
                DescribeAccountsOutcome DescribeAccounts(const Model::DescribeAccountsRequest &request);
                void DescribeAccountsAsync(const Model::DescribeAccountsRequest& request, const DescribeAccountsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAccountsOutcomeCallable DescribeAccountsCallable(const Model::DescribeAccountsRequest& request);

                /**
                 *本接口（DescribeDBBackups）用于查询实例备份列表。
                 * @param req DescribeDBBackupsRequest
                 * @return DescribeDBBackupsOutcome
                 */
                DescribeDBBackupsOutcome DescribeDBBackups(const Model::DescribeDBBackupsRequest &request);
                void DescribeDBBackupsAsync(const Model::DescribeDBBackupsRequest& request, const DescribeDBBackupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDBBackupsOutcomeCallable DescribeDBBackupsCallable(const Model::DescribeDBBackupsRequest& request);

                /**
                 *本接口（DescribeDBErrlogs）用于获取错误日志。
                 * @param req DescribeDBErrlogsRequest
                 * @return DescribeDBErrlogsOutcome
                 */
                DescribeDBErrlogsOutcome DescribeDBErrlogs(const Model::DescribeDBErrlogsRequest &request);
                void DescribeDBErrlogsAsync(const Model::DescribeDBErrlogsRequest& request, const DescribeDBErrlogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDBErrlogsOutcomeCallable DescribeDBErrlogsCallable(const Model::DescribeDBErrlogsRequest& request);

                /**
                 *本接口 (DescribeDBInstanceAttribute) 用于查询某个实例的详情信息。
                 * @param req DescribeDBInstanceAttributeRequest
                 * @return DescribeDBInstanceAttributeOutcome
                 */
                DescribeDBInstanceAttributeOutcome DescribeDBInstanceAttribute(const Model::DescribeDBInstanceAttributeRequest &request);
                void DescribeDBInstanceAttributeAsync(const Model::DescribeDBInstanceAttributeRequest& request, const DescribeDBInstanceAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDBInstanceAttributeOutcomeCallable DescribeDBInstanceAttributeCallable(const Model::DescribeDBInstanceAttributeRequest& request);

                /**
                 *本接口 (DescribeDBInstances) 用于查询一个或多个实例的详细信息。
                 * @param req DescribeDBInstancesRequest
                 * @return DescribeDBInstancesOutcome
                 */
                DescribeDBInstancesOutcome DescribeDBInstances(const Model::DescribeDBInstancesRequest &request);
                void DescribeDBInstancesAsync(const Model::DescribeDBInstancesRequest& request, const DescribeDBInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDBInstancesOutcomeCallable DescribeDBInstancesCallable(const Model::DescribeDBInstancesRequest& request);

                /**
                 *本接口（DescribeDBSlowlogs）用于获取慢查询日志。
                 * @param req DescribeDBSlowlogsRequest
                 * @return DescribeDBSlowlogsOutcome
                 */
                DescribeDBSlowlogsOutcome DescribeDBSlowlogs(const Model::DescribeDBSlowlogsRequest &request);
                void DescribeDBSlowlogsAsync(const Model::DescribeDBSlowlogsRequest& request, const DescribeDBSlowlogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDBSlowlogsOutcomeCallable DescribeDBSlowlogsCallable(const Model::DescribeDBSlowlogsRequest& request);

                /**
                 *本接口（DescribeDBXlogs）用于获取实例Xlog列表。
                 * @param req DescribeDBXlogsRequest
                 * @return DescribeDBXlogsOutcome
                 */
                DescribeDBXlogsOutcome DescribeDBXlogs(const Model::DescribeDBXlogsRequest &request);
                void DescribeDBXlogsAsync(const Model::DescribeDBXlogsRequest& request, const DescribeDBXlogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDBXlogsOutcomeCallable DescribeDBXlogsCallable(const Model::DescribeDBXlogsRequest& request);

                /**
                 *本接口（DescribeOrders）用于获取订单信息。
                 * @param req DescribeOrdersRequest
                 * @return DescribeOrdersOutcome
                 */
                DescribeOrdersOutcome DescribeOrders(const Model::DescribeOrdersRequest &request);
                void DescribeOrdersAsync(const Model::DescribeOrdersRequest& request, const DescribeOrdersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeOrdersOutcomeCallable DescribeOrdersCallable(const Model::DescribeOrdersRequest& request);

                /**
                 *本接口 (DescribeProductConfig) 用于查询售卖规格配置。
                 * @param req DescribeProductConfigRequest
                 * @return DescribeProductConfigOutcome
                 */
                DescribeProductConfigOutcome DescribeProductConfig(const Model::DescribeProductConfigRequest &request);
                void DescribeProductConfigAsync(const Model::DescribeProductConfigRequest& request, const DescribeProductConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeProductConfigOutcomeCallable DescribeProductConfigCallable(const Model::DescribeProductConfigRequest& request);

                /**
                 *本接口 (DescribeRegions) 用于查询售卖地域信息。
                 * @param req DescribeRegionsRequest
                 * @return DescribeRegionsOutcome
                 */
                DescribeRegionsOutcome DescribeRegions(const Model::DescribeRegionsRequest &request);
                void DescribeRegionsAsync(const Model::DescribeRegionsRequest& request, const DescribeRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRegionsOutcomeCallable DescribeRegionsCallable(const Model::DescribeRegionsRequest& request);

                /**
                 *本接口 (DescribeZones) 用于查询支持的可用区信息。
                 * @param req DescribeZonesRequest
                 * @return DescribeZonesOutcome
                 */
                DescribeZonesOutcome DescribeZones(const Model::DescribeZonesRequest &request);
                void DescribeZonesAsync(const Model::DescribeZonesRequest& request, const DescribeZonesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeZonesOutcomeCallable DescribeZonesCallable(const Model::DescribeZonesRequest& request);

                /**
                 *本接口 (InitDBInstances) 用于初始化云数据库PostgreSQL实例。
                 * @param req InitDBInstancesRequest
                 * @return InitDBInstancesOutcome
                 */
                InitDBInstancesOutcome InitDBInstances(const Model::InitDBInstancesRequest &request);
                void InitDBInstancesAsync(const Model::InitDBInstancesRequest& request, const InitDBInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                InitDBInstancesOutcomeCallable InitDBInstancesCallable(const Model::InitDBInstancesRequest& request);

                /**
                 *本接口 (InquiryPriceCreateDBInstances) 用于查询购买一个或多个实例的价格信息。
                 * @param req InquiryPriceCreateDBInstancesRequest
                 * @return InquiryPriceCreateDBInstancesOutcome
                 */
                InquiryPriceCreateDBInstancesOutcome InquiryPriceCreateDBInstances(const Model::InquiryPriceCreateDBInstancesRequest &request);
                void InquiryPriceCreateDBInstancesAsync(const Model::InquiryPriceCreateDBInstancesRequest& request, const InquiryPriceCreateDBInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                InquiryPriceCreateDBInstancesOutcomeCallable InquiryPriceCreateDBInstancesCallable(const Model::InquiryPriceCreateDBInstancesRequest& request);

                /**
                 *本接口（InquiryPriceRenewDBInstance）用于查询续费实例的价格。
                 * @param req InquiryPriceRenewDBInstanceRequest
                 * @return InquiryPriceRenewDBInstanceOutcome
                 */
                InquiryPriceRenewDBInstanceOutcome InquiryPriceRenewDBInstance(const Model::InquiryPriceRenewDBInstanceRequest &request);
                void InquiryPriceRenewDBInstanceAsync(const Model::InquiryPriceRenewDBInstanceRequest& request, const InquiryPriceRenewDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                InquiryPriceRenewDBInstanceOutcomeCallable InquiryPriceRenewDBInstanceCallable(const Model::InquiryPriceRenewDBInstanceRequest& request);

                /**
                 *本接口（InquiryPriceUpgradeDBInstance）用于查询升级实例的价格。
                 * @param req InquiryPriceUpgradeDBInstanceRequest
                 * @return InquiryPriceUpgradeDBInstanceOutcome
                 */
                InquiryPriceUpgradeDBInstanceOutcome InquiryPriceUpgradeDBInstance(const Model::InquiryPriceUpgradeDBInstanceRequest &request);
                void InquiryPriceUpgradeDBInstanceAsync(const Model::InquiryPriceUpgradeDBInstanceRequest& request, const InquiryPriceUpgradeDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                InquiryPriceUpgradeDBInstanceOutcomeCallable InquiryPriceUpgradeDBInstanceCallable(const Model::InquiryPriceUpgradeDBInstanceRequest& request);

                /**
                 *本接口（ModifyAccountRemark）用于修改帐号备注。
                 * @param req ModifyAccountRemarkRequest
                 * @return ModifyAccountRemarkOutcome
                 */
                ModifyAccountRemarkOutcome ModifyAccountRemark(const Model::ModifyAccountRemarkRequest &request);
                void ModifyAccountRemarkAsync(const Model::ModifyAccountRemarkRequest& request, const ModifyAccountRemarkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyAccountRemarkOutcomeCallable ModifyAccountRemarkCallable(const Model::ModifyAccountRemarkRequest& request);

                /**
                 *本接口（ModifyDBInstanceName）用于修改postgresql实例名字。
                 * @param req ModifyDBInstanceNameRequest
                 * @return ModifyDBInstanceNameOutcome
                 */
                ModifyDBInstanceNameOutcome ModifyDBInstanceName(const Model::ModifyDBInstanceNameRequest &request);
                void ModifyDBInstanceNameAsync(const Model::ModifyDBInstanceNameRequest& request, const ModifyDBInstanceNameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDBInstanceNameOutcomeCallable ModifyDBInstanceNameCallable(const Model::ModifyDBInstanceNameRequest& request);

                /**
                 *本接口（ModifyDBInstancesProject）用于将实例转至其他项目。
                 * @param req ModifyDBInstancesProjectRequest
                 * @return ModifyDBInstancesProjectOutcome
                 */
                ModifyDBInstancesProjectOutcome ModifyDBInstancesProject(const Model::ModifyDBInstancesProjectRequest &request);
                void ModifyDBInstancesProjectAsync(const Model::ModifyDBInstancesProjectRequest& request, const ModifyDBInstancesProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDBInstancesProjectOutcomeCallable ModifyDBInstancesProjectCallable(const Model::ModifyDBInstancesProjectRequest& request);

                /**
                 *本接口（OpenDBExtranetAccess）用于开通外网。
                 * @param req OpenDBExtranetAccessRequest
                 * @return OpenDBExtranetAccessOutcome
                 */
                OpenDBExtranetAccessOutcome OpenDBExtranetAccess(const Model::OpenDBExtranetAccessRequest &request);
                void OpenDBExtranetAccessAsync(const Model::OpenDBExtranetAccessRequest& request, const OpenDBExtranetAccessAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                OpenDBExtranetAccessOutcomeCallable OpenDBExtranetAccessCallable(const Model::OpenDBExtranetAccessRequest& request);

                /**
                 *本接口（RenewInstance）用于续费实例。
                 * @param req RenewInstanceRequest
                 * @return RenewInstanceOutcome
                 */
                RenewInstanceOutcome RenewInstance(const Model::RenewInstanceRequest &request);
                void RenewInstanceAsync(const Model::RenewInstanceRequest& request, const RenewInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RenewInstanceOutcomeCallable RenewInstanceCallable(const Model::RenewInstanceRequest& request);

                /**
                 *本接口（ResetAccountPassword）用于重置实例的账户密码。
                 * @param req ResetAccountPasswordRequest
                 * @return ResetAccountPasswordOutcome
                 */
                ResetAccountPasswordOutcome ResetAccountPassword(const Model::ResetAccountPasswordRequest &request);
                void ResetAccountPasswordAsync(const Model::ResetAccountPasswordRequest& request, const ResetAccountPasswordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ResetAccountPasswordOutcomeCallable ResetAccountPasswordCallable(const Model::ResetAccountPasswordRequest& request);

                /**
                 *本接口（RestartDBInstance）用于重启实例。
                 * @param req RestartDBInstanceRequest
                 * @return RestartDBInstanceOutcome
                 */
                RestartDBInstanceOutcome RestartDBInstance(const Model::RestartDBInstanceRequest &request);
                void RestartDBInstanceAsync(const Model::RestartDBInstanceRequest& request, const RestartDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RestartDBInstanceOutcomeCallable RestartDBInstanceCallable(const Model::RestartDBInstanceRequest& request);

                /**
                 *本接口（SetAutoRenewFlag）用于设置自动续费。
                 * @param req SetAutoRenewFlagRequest
                 * @return SetAutoRenewFlagOutcome
                 */
                SetAutoRenewFlagOutcome SetAutoRenewFlag(const Model::SetAutoRenewFlagRequest &request);
                void SetAutoRenewFlagAsync(const Model::SetAutoRenewFlagRequest& request, const SetAutoRenewFlagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SetAutoRenewFlagOutcomeCallable SetAutoRenewFlagCallable(const Model::SetAutoRenewFlagRequest& request);

                /**
                 *本接口（UpgradeDBInstance）用于升级实例。
                 * @param req UpgradeDBInstanceRequest
                 * @return UpgradeDBInstanceOutcome
                 */
                UpgradeDBInstanceOutcome UpgradeDBInstance(const Model::UpgradeDBInstanceRequest &request);
                void UpgradeDBInstanceAsync(const Model::UpgradeDBInstanceRequest& request, const UpgradeDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpgradeDBInstanceOutcomeCallable UpgradeDBInstanceCallable(const Model::UpgradeDBInstanceRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_POSTGRESCLIENT_H_
