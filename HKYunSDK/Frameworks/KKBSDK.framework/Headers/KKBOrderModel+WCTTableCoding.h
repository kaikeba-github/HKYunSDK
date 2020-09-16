//
//  KKBRechargeOrderModel+WCTTableCoding.h
//  KaiKeBa
//
//  Created by zddMac on 2019/8/19.
//  Copyright © 2019 kaikeba. All rights reserved.
//

#import <WCDB/WCDB.h>
#import "KKBOrderModel.h"

@interface KKBOrderModel(WCTTableCoding) <WCTTableCoding>

WCDB_PROPERTY(order_no);
WCDB_PROPERTY(total_amount);
WCDB_PROPERTY(product_code);
WCDB_PROPERTY(product_name);
WCDB_PROPERTY(receipt_base64);
//WCDB_PROPERTY(out_product_code);


@end
