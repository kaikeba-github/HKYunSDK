//
//  KKBSDKJobResumeModel.h
//  KKBSDK
//
//  Created by Duane on 2020/4/15.
//  Copyright © 2020 KaiKeBa. All rights reserved.
//

#import <KKBSDK/KKBSDK.h>

NS_ASSUME_NONNULL_BEGIN

@interface KKBSDKJobResumeModel : KKBBaseModel

@property (nonatomic, assign) uintID attachId; // 3366,
@property (nonatomic, strong) NSString *key; // "other/123/20190911105243-71709/FonZYH3lirHMLEV5Q8aWpMs7kw8e.pdf",
@property (nonatomic, strong) NSString *name; // 滴滴电子发票 (1).pdf",
@property (nonatomic, assign) NSUInteger size; // "38252",
@property (nonatomic, strong) NSString *url; // http://test.res.kaikeba.com/other/123/20190911105243-71709/FonZYH3lirHMLEV5Q8aWpMs7kw8e.pdf"

@end

NS_ASSUME_NONNULL_END
