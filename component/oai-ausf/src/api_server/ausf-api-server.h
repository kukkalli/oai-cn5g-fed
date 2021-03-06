/**
 * RNI API
 * The ETSI MEC ISG MEC012 Radio Network Information API described using OpenAPI
 *
 * OpenAPI spec version: 1.1.1
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

/*
 * Licensed to the OpenAirInterface (OAI) Software Alliance under one or more
 * contributor license agreements.  See the NOTICE file distributed with
 * this work for additional information regarding copyright ownership.
 * The OpenAirInterface Software Alliance licenses this file to You under
 * the OAI Public License, Version 1.1  (the "License"); you may not use this
 *file except in compliance with the License. You may obtain a copy of the
 *License at
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

#ifndef FILE_AUSF_API_SERVER_SEEN
#define FILE_AUSF_API_SERVER_SEEN

#include "pistache/endpoint.h"
#include "pistache/http.h"
#include "pistache/router.h"
#ifdef __linux__
#include <vector>
#include <signal.h>
#include <unistd.h>
#endif

#include "AuthenticationResultDeletionApiImpl.h"
#include "DefaultApiImpl.h"
#include "ausf_app.hpp"

using namespace oai::ausf_server::api;
using namespace oai::ausf::app;

class AUSFApiServer {
 public:
  AUSFApiServer(Pistache::Address address, ausf_app* ausf_app_inst)
      : m_httpEndpoint(std::make_shared<Pistache::Http::Endpoint>(address)) {
    m_router  = std::make_shared<Pistache::Rest::Router>();
    m_address = address.host() + ":" + (address.port()).toString();

    m_defaultApiImpl =
        std::make_shared<DefaultApiImpl>(m_router, ausf_app_inst, m_address);
    m_authenticationResultDeletionApiImpl =
        std::make_shared<AuthenticationResultDeletionApiImpl>(
            m_router, ausf_app_inst, m_address);
  }
  void init(size_t thr = 1);
  void start();
  void shutdown();

 private:
  std::shared_ptr<Pistache::Http::Endpoint> m_httpEndpoint;
  std::shared_ptr<Pistache::Rest::Router> m_router;
  std::shared_ptr<DefaultApiImpl> m_defaultApiImpl;
  std::shared_ptr<AuthenticationResultDeletionApiImpl>
      m_authenticationResultDeletionApiImpl;
  std::string m_address;
};

#endif
