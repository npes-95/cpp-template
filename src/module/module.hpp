/**
 * @file module.hpp
 * @author npes-95 (npe.smith.95@gmail.com)
 * @brief Module base class definition.
 * 
 * @version 0.1
 * @date 2020-09-18
 * 
 * @copyright Copyright (c) 2020
 * 
 */

#pragma once

/**
 * @brief Module base class.
 * 
 */
class Module {
public:
    /**
     * @brief Construct a new Module object.
     * 
     */
    Module() {};

    /**
     * @brief Destroy module object. Does not destroy connected 
     * modules as they are owned and managed by the Network.
     * 
     */
    virtual ~Module() {};

};

