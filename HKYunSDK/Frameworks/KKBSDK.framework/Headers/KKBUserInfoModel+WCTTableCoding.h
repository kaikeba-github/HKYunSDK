//
//  KKBUserInfoModel+WCTTableCoding.h
//  KaiKeBa
//
//  Created by Duane on 2019/5/1.
//  Copyright © 2019 kaikeba. All rights reserved.
//

#import "KKBUserInfoModel.h"
#import <WCDB/WCDB.h>

@interface KKBUserInfoModel (WCTTableCoding) <WCTTableCoding>

WCDB_PROPERTY(uid)
WCDB_PROPERTY(mobile)
WCDB_PROPERTY(nickname)
WCDB_PROPERTY(realname)
WCDB_PROPERTY(birthday)
WCDB_PROPERTY(province)
WCDB_PROPERTY(city)
WCDB_PROPERTY(area)
WCDB_PROPERTY(email)
WCDB_PROPERTY(gender)
WCDB_PROPERTY(avatar)
WCDB_PROPERTY(company)
WCDB_PROPERTY(industryId)
WCDB_PROPERTY(industry)
WCDB_PROPERTY(isBindWx)

WCDB_PROPERTY(updateDate)
WCDB_PROPERTY(uniqueId)

@end
