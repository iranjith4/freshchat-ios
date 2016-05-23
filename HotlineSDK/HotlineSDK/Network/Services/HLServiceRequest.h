//
//  HLServiceRequest.h
//  HotlineSDK
//
//  Created by Aravinth Chandran on 10/10/15.
//  Copyright © 2015 Freshdesk. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface HLServiceRequest : NSMutableURLRequest

@property(nonatomic, strong, readonly) NSURL *baseURL;

-(instancetype)initWithBaseURL:(NSURL *)baseURL;

//contains hard coded URL of hotline -- add more doc
-(instancetype)initWithMethod:(NSString *)httpMethod;

-(instancetype)initMultipartFormRequest;

-(void)setRelativePath:(NSString *)path andURLParams:(NSArray *)params;

-(void)setBody:(NSData *)body;

/**
 Appends the HTTP headers `Content-Disposition: form-data; name=#{name}"`, followed by the encoded data and the multipart form boundary.
 
 data: The data to be encoded and appended to the form data.
 name: The name to be associated with the specified data. This parameter must not be `nil`. */

- (void)appendPartWithFormData:(NSData *)data name:(NSString *)name;

/**
 Appends the HTTP header `Content-Disposition: file; filename=#{filename}; name=#{name}"` and `Content-Type: #{mimeType}`, followed by the encoded file data and the multipart form boundary.
 
 data: The data to be encoded and appended to the form data.
 name: The name to be associated with the specified data. This parameter must not be `nil`.
 fileName: The filename to be associated with the specified data. This parameter must not be `nil`.
 mimeType: The MIME type of the specified data. (For example, the MIME type for a JPEG image is image/jpeg.)
 For a list of valid MIME types, see http://www.iana.org/assignments/media-types/. This parameter must not be `nil`. */

- (void)appendPartWithFileData:(NSData *)data name:(NSString *)name fileName:(NSString *)fileName mimeType:(NSString *)mimeType;



@end

//Add new method to add content length when people set http body

//Declare appending file data with these features in a spearate class inside this class cluster