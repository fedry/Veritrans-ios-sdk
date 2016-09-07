//
//  VTTransactionData.h
//  iossdk-gojek
//
//  Created by Akbar Taufiq Herlangga on 3/3/16.
//  Copyright © 2016 Veritrans. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "MTPaymentDetails.h"
#import "VTTransactionDetails.h"
#import "MTCustomerDetails.h"
#import "MTItemDetail.h"
#import "MTTransactionTokenResponse.h"

/**
 VTTransaction contains aggregated data needed to do a transaction.
 
 There are two mandatory fields here: `paymentDetails` and `transactionDetails`. The rest are optional.
 */
@interface VTTransaction : NSObject

/**
 The payment details. This object contains payment-specific data. Each payment type has its own data structure.
 */
@property (nonatomic, readonly) id<MTPaymentDetails> paymentDetails;


/**
 Set the value for the first custom field. The label for this field can be set in MAP.
 */
@property (nonatomic) NSString *customField1;

/**
 Set the value for the second custom field. The label for this field can be set in MAP.
 */
@property (nonatomic) NSString *customField2;

/**
 Set the value for the third custom field. The label for this field can be set in MAP.
 */
@property (nonatomic) NSString *customField3;

- (instancetype)initWithPaymentDetails:(id<MTPaymentDetails>)paymentDetails;

- (NSDictionary *)dictionaryValue;

- (NSString *)chargeURL;

@end
