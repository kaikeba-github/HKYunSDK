//
//  KKBIndustryModel.h
//  KaiKeBa
//
//  Created by Duane on 2019/5/6.
//  Copyright © 2019 kaikeba. All rights reserved.
//

#import "KKBBaseModel.h"

NS_ASSUME_NONNULL_BEGIN

@interface KKBIndustryModel : KKBBaseModel

@property(nonatomic, assign) uintID ID;
@property(nonatomic, strong) NSString *industry;

@end

NS_ASSUME_NONNULL_END
