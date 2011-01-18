//
//  DBEnvironment.h
//  DiscussionBoard
//
//  Created by Daniel Hammond on 1/7/11.
//  Copyright 2011 Two Toasters. All rights reserved.
//

/**
 * General Constants
 */

/**
 * The Base URL constant. This Base URL is used to initialize RestKit via RKClient
 * or RKObjectManager (which in turn initializes an instance of RKClient). The Base
 * URL is used to build full URL's by appending a resource path onto the end.
 *
 * By abstracting your Base URL into an externally defined constant and utilizing
 * conditional compilation, you can very quickly switch between server environments
 * and produce builds targetted at different backend systems.
 */
extern NSString* const kDBBaseURLString;

// TODO: Gets moved to DBUser as an internal constant
extern NSString* const kCurrentUserIDKey;

// TODO: Gets moved to DBUser
extern NSString* const kUserLoggedInNotificationName;
extern NSString* const kLoginCanceledNotificationName;
extern NSString* const kUserLoggedOutNotificationName;

// TODO: See if we can eliminate or abstract this further
extern NSString* const kObjectCreatedUpdatedOrDestroyedNotificationName;