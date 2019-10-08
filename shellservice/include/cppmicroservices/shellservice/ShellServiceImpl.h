/*=============================================================================

  Library: CppMicroServices

  Copyright (c) The CppMicroServices developers. See the COPYRIGHT
  file at the top-level directory of this distribution and at
  https://github.com/CppMicroServices/CppMicroServices/COPYRIGHT .

  Licensed under the Apache License, Version 2.0 (the "License");
  you may not use this file except in compliance with the License.
  You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

  Unless required by applicable law or agreed to in writing, software
  distributed under the License is distributed on an "AS IS" BASIS,
  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
  See the License for the specific language governing permissions and
  limitations under the License.

=============================================================================*/

#ifndef CPPMICROSERVICES_SHELLSERVICEIMPL_H
#define CPPMICROSERVICES_SHELLSERVICEIMPL_H

#include "cppmicroservices/GlobalConfig.h"
#include "ShellService.h"

//#include "cppmicroservices/shellservice/ShellServiceExport.h"

#include <memory>
#include <vector>

namespace cppmicroservices {

class BundleResource;
    
class ShellServiceImpl : public ShellService
{
public:
  ShellServiceImpl();
  ~ShellServiceImpl();

  void ExecuteCommand(const std::string& cmd);

  //std::vector<std::string> GetCompletions(const std::string& in);

private:
  ShellServiceImpl(const ShellServiceImpl&);
  ShellServiceImpl& operator=(const ShellServiceImpl&);

  //void LoadSchemeResource(const BundleResource& res);

  //struct Impl;
  //std::unique_ptr<Impl> d;
};
}

#endif // CPPMICROSERVICES_SHELLSERVICEIMPL_H