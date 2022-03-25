/*
 * Licensed to the OpenAirInterface (OAI) Software Alliance under one or more
 * contributor license agreements.  See the NOTICE file distributed with
 * this work for additional information regarding copyright ownership.
 * The OpenAirInterface Software Alliance licenses this file to You under
 * the OAI Public License, Version 1.1  (the "License"); you may not use this
 * file except in compliance with the License. You may obtain a copy of the
 * License at
 *
 *      http://www.openairinterface.org/?page_id=698
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *-------------------------------------------------------------------------------
 * For more information about the OpenAirInterface (OAI) Software Alliance:
 *      contact@openairinterface.org
 */
/**
 * Nudr_DataRepository API OpenAPI file
 * Unified Data Repository Service. © 2020, 3GPP Organizational Partners (ARIB,
 * ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 2.1.2
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */
/*
 * ExposureDataSubscriptionsCollectionApi.h
 *
 *
 */

#ifndef ExposureDataSubscriptionsCollectionApi_H_
#define ExposureDataSubscriptionsCollectionApi_H_

#include <pistache/http.h>
#include <pistache/http_headers.h>
#include <pistache/optional.h>
#include <pistache/router.h>

#include "ExposureDataSubscription.h"
#include "ProblemDetails.h"

namespace oai::udr::api {

using namespace oai::udr::model;

class ExposureDataSubscriptionsCollectionApi {
public:
  ExposureDataSubscriptionsCollectionApi(
      std::shared_ptr<Pistache::Rest::Router>);
  virtual ~ExposureDataSubscriptionsCollectionApi() {}
  void init();

  const std::string base = "/nudr-dr/";

private:
  void setupRoutes();

  void create_individual_exposure_data_subscription_handler(
      const Pistache::Rest::Request &request,
      Pistache::Http::ResponseWriter response);
  void exposure_data_subscriptions_collection_api_default_handler(
      const Pistache::Rest::Request &request,
      Pistache::Http::ResponseWriter response);

  std::shared_ptr<Pistache::Rest::Router> router;

  /// <summary>
  /// Create a subscription to receive notification of exposure data changes
  /// </summary>
  /// <remarks>
  ///
  /// </remarks>
  /// <param name="exposureDataSubscription"></param>
  virtual void create_individual_exposure_data_subscription(
      const ExposureDataSubscription &exposureDataSubscription,
      Pistache::Http::ResponseWriter &response) = 0;
};

} // namespace oai::udr::api

#endif /* ExposureDataSubscriptionsCollectionApi_H_ */
