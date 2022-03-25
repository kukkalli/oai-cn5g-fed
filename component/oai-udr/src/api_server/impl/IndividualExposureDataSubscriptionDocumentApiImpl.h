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
 * IndividualExposureDataSubscriptionDocumentApiImpl.h
 *
 *
 */

#ifndef INDIVIDUAL_EXPOSURE_DATA_SUBSCRIPTION_DOCUMENT_API_IMPL_H_
#define INDIVIDUAL_EXPOSURE_DATA_SUBSCRIPTION_DOCUMENT_API_IMPL_H_

#include "ExposureDataSubscription.h"
#include "udr_app.hpp"
#include <IndividualExposureDataSubscriptionDocumentApi.h>
#include <pistache/http.h>
#include <pistache/optional.h>

namespace oai::udr::api {

using namespace oai::udr::model;
using namespace oai::udr::app;

class IndividualExposureDataSubscriptionDocumentApiImpl
    : public oai::udr::api::IndividualExposureDataSubscriptionDocumentApi {
private:
  udr_app *m_udr_app;
  std::string m_address;

public:
  IndividualExposureDataSubscriptionDocumentApiImpl(
      std::shared_ptr<Pistache::Rest::Router>, udr_app *udr_app_inst,
      std::string address);
  ~IndividualExposureDataSubscriptionDocumentApiImpl() {}

  void delete_individual_exposure_data_subscription(
      const std::string &subId, Pistache::Http::ResponseWriter &response);
  void replace_individual_exposure_data_subscription(
      const std::string &subId,
      const ExposureDataSubscription &exposureDataSubscription,
      Pistache::Http::ResponseWriter &response);
};

} // namespace oai::udr::api

#endif
