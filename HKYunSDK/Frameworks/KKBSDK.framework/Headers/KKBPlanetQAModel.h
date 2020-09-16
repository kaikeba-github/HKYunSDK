//
//  KKBPlanetQAModel.h
//  KaiKeBa
//
//  Created by zddMac on 2019/11/2.
//  Copyright © 2019 kaikeba. All rights reserved.
//

#import "KKBBaseModel.h"

NS_ASSUME_NONNULL_BEGIN

@interface KKBPlanetQAModel : KKBBaseModel
@property (nonatomic, assign) uintID threadId;
@property (nonatomic, strong) NSString *title;
@property (nonatomic, assign) NSInteger askNum;

@end

NS_ASSUME_NONNULL_END
