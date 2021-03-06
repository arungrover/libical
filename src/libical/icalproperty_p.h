/*======================================================================
 FILE: icalproperty_p.h

 (C) COPYRIGHT 2000, Eric Busboom <eric@civicknowledge.com>

 This library is free software; you can redistribute it and/or modify
 it under the terms of either:

    The LGPL as published by the Free Software Foundation, version
    2.1, available at: https://www.gnu.org/licenses/lgpl-2.1.html

 Or:

    The Mozilla Public License Version 2.0. You may obtain a copy of
    the License at https://www.mozilla.org/MPL/
======================================================================*/

#ifndef ICALPROPERTY_P_H
#define ICALPROPERTY_P_H

#include "icalproperty.h"
#include "icalcomponent.h"

/* Check validity and attributes of icalproperty_kind and icalvalue_kind pair */
LIBICAL_ICAL_NO_EXPORT int icalproperty_value_kind_is_valid(icalproperty_kind pkind,
                                                            icalvalue_kind vkind);
LIBICAL_ICAL_NO_EXPORT int icalproperty_value_kind_is_multivalued(icalproperty_kind pkind,
                                                                  icalvalue_kind *vkind);
LIBICAL_ICAL_NO_EXPORT int icalproperty_value_kind_is_default(icalproperty_kind pkind,
                                                              icalvalue_kind vkind);

#endif /* ICALPROPERTY_P_H */
