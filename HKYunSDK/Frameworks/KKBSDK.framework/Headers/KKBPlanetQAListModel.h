//
//  KKBPlanetQAListModel.h
//  KaiKeBa
//
//  Created by zddMac on 2019/11/4.
//  Copyright © 2019 kaikeba. All rights reserved.
//

#import "KKBBaseModel.h"

NS_ASSUME_NONNULL_BEGIN

@class KKBPlanetQAModel;
@interface KKBPlanetQAListModel : KKBBaseModel
@property (nonatomic, strong) NSArray <KKBPlanetQAModel *> *list;
@property (nonatomic, assign) NSUInteger total;

@end

NS_ASSUME_NONNULL_END
