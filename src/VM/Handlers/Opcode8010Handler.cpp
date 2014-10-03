/*
 * Copyright 2012-2014 Falltergeist Developers.
 *
 * This file is part of Falltergeist.
 *
 * Falltergeist is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * Falltergeist is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with Falltergeist.  If not, see <http://www.gnu.org/licenses/>.
 */

// C++ standard includes

// Falltergeist includes
#include "../../Engine/Logger.h"
#include "../../VM/Handlers/Opcode8010Handler.h"
#include "../../VM/VM.h"
#include "../../VM/VMHaltException.h"

// Third party includes

namespace Falltergeist
{

Opcode8010Handler::Opcode8010Handler(VM* vm) : OpcodeHandler(vm)
{
}

void Opcode8010Handler::_run()
{
    Logger::debug("SCRIPT") << "[8010] [*] startdone" << std::endl;
    _vm->setInitialized(true);
    throw VMHaltException();
}

}