//
//  KKBGalaxyListModel.h
//  KaiKeBa
//
//  Created by Duane on 2019/10/29.
//  Copyright © 2019 kaikeba. All rights reserved.
//

#import "KKBGalaxyModel.h"

NS_ASSUME_NONNULL_BEGIN

@interface KKBGalaxyListModel : KKBGalaxyModel

@property (nonatomic, copy) NSString *school;
@property (nonatomic, assign) NSInteger status;
@property (nonatomic, assign) uintID creatorUid;
@property (nonatomic, copy) NSDate *createdAt;
@property (nonatomic, copy) NSDate *updatedAt;

- (NSString *)galaxyImage;

@end

NS_ASSUME_NONNULL_END
