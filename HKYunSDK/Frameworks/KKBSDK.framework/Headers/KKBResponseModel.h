//
//  KKBResponseModel.h
//  KaiKeBa
//
//  Created by Duane on 2019/4/12.
//  Copyright © 2019 kaikeba. All rights reserved.
//

#import "KKBBaseModel.h"

NS_ASSUME_NONNULL_BEGIN

@interface KKBResponseModel : KKBBaseModel

@property (nonatomic, assign) NSInteger code; //请求状态码
@property (nonatomic, strong) NSString *msg; //状态描述
@property (nonatomic, strong) id data;

@property (nonatomic, strong) id result;

@end

NS_ASSUME_NONNULL_END
