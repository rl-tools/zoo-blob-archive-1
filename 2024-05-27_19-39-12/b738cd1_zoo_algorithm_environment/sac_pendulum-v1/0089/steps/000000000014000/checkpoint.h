// NOTE: This code export assumes that the endianness of the target platform is the same as the endianness of the source platform
#include <rl_tools/containers.h>
#include <rl_tools/nn/parameters/parameters.h>
// NOTE: This code export assumes that the endianness of the target platform is the same as the endianness of the source platform
#include <rl_tools/containers.h>
#include <rl_tools/nn/parameters/parameters.h>
#include <rl_tools/nn/layers/dense/layer.h>
#include <rl_tools/nn_models/sequential/model.h>
// NOTE: This code export assumes that the endianness of the target platform is the same as the endianness of the source platform
#include <rl_tools/containers.h>
#include <rl_tools/nn/parameters/parameters.h>
// NOTE: This code export assumes that the endianness of the target platform is the same as the endianness of the source platform
#include <rl_tools/containers.h>
#include <rl_tools/nn/parameters/parameters.h>
#include <rl_tools/nn/layers/dense/layer.h>
#include <rl_tools/nn_models/sequential/model.h>
// NOTE: This code export assumes that the endianness of the target platform is the same as the endianness of the source platform
#include <rl_tools/containers.h>
#include <rl_tools/nn/parameters/parameters.h>
// NOTE: This code export assumes that the endianness of the target platform is the same as the endianness of the source platform
#include <rl_tools/containers.h>
#include <rl_tools/nn/parameters/parameters.h>
#include <rl_tools/nn/layers/dense/layer.h>
#include <rl_tools/nn_models/sequential/model.h>
namespace rl_tools::checkpoint::actor {
    namespace layer_0 {
        namespace weights {
            namespace parameters_memory {
                static_assert(sizeof(unsigned char) == 1);
                alignas(float) const unsigned char memory[] = {205, 26, 71, 63, 124, 17, 143, 191, 115, 133, 165, 190, 219, 244, 170, 62, 144, 118, 182, 191, 243, 135, 135, 190, 76, 20, 45, 61, 206, 22, 28, 63, 255, 59, 140, 62, 14, 227, 220, 190, 10, 105, 22, 63, 33, 218, 179, 60, 173, 95, 13, 63, 54, 224, 165, 190, 149, 14, 24, 191, 91, 115, 136, 62, 160, 197, 171, 190, 229, 240, 209, 62, 10, 42, 77, 190, 175, 146, 181, 63, 158, 98, 101, 62, 252, 135, 32, 191, 170, 4, 167, 189, 229, 209, 168, 190, 122, 121, 203, 189, 49, 165, 80, 63, 56, 239, 30, 62, 3, 224, 163, 190, 180, 170, 67, 61, 171, 214, 186, 62, 145, 31, 197, 189, 37, 23, 51, 62, 255, 26, 7, 63, 85, 177, 63, 62, 253, 44, 85, 63, 217, 55, 144, 190, 155, 53, 205, 62, 72, 194, 186, 63, 116, 23, 213, 62, 139, 195, 229, 62, 97, 207, 144, 190, 0, 35, 30, 63, 119, 218, 87, 62, 19, 82, 26, 63, 25, 133, 232, 190, 6, 110, 76, 63, 160, 87, 31, 63, 95, 74, 101, 62, 117, 58, 20, 61, 193, 36, 113, 191, 23, 139, 216, 190, 132, 34, 105, 62, 90, 105, 35, 191, 183, 192, 151, 62, 175, 8, 217, 190, 178, 134, 122, 63, 89, 142, 73, 190, 31, 231, 178, 189, 134, 74, 109, 191, 118, 239, 107, 189, 101, 115, 223, 190, 226, 68, 109, 63, 253, 242, 4, 63, 85, 17, 136, 189, 132, 68, 79, 191, 113, 182, 140, 190, 165, 246, 100, 63, 71, 31, 64, 63, 213, 152, 251, 61, 219, 216, 195, 190, 243, 114, 243, 191, 236, 53, 159, 190, 34, 59, 55, 63, 146, 210, 14, 191, 234, 162, 112, 190, 5, 224, 52, 191, 30, 193, 146, 189, 189, 18, 118, 191, 216, 160, 140, 189, 151, 61, 86, 63, 181, 35, 162, 62, 78, 228, 255, 189, 201, 153, 47, 63, 89, 234, 225, 190, 220, 211, 47, 191, 237, 65, 159, 61, 233, 245, 137, 62, 29, 149, 20, 190, 149, 31, 179, 189, 81, 153, 182, 62, 107, 201, 4, 63, 171, 104, 93, 191, 200, 247, 138, 190, 105, 255, 22, 63, 237, 42, 95, 190, 148, 158, 140, 62};
                using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 32, 3, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
                using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
                const CONTAINER_TYPE container = {(float*)memory}; 
            }
            using PARAMETER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::Plain::spec<parameters_memory::CONTAINER_TYPE, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::groups::Input, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::categories::Weights>;
            const RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::Plain::instance<PARAMETER_SPEC> parameters = {parameters_memory::container};
        }
        namespace biases {
            namespace parameters_memory {
                static_assert(sizeof(unsigned char) == 1);
                alignas(float) const unsigned char memory[] = {199, 159, 167, 190, 240, 7, 155, 62, 231, 28, 49, 191, 183, 104, 208, 62, 103, 110, 54, 190, 203, 89, 13, 62, 227, 102, 206, 190, 193, 11, 154, 190, 202, 106, 22, 190, 23, 85, 9, 63, 119, 153, 43, 190, 174, 124, 113, 190, 195, 198, 138, 189, 239, 64, 234, 190, 213, 134, 235, 62, 242, 127, 250, 190, 178, 201, 166, 60, 121, 34, 16, 61, 190, 213, 191, 62, 34, 2, 146, 62, 148, 252, 224, 61, 200, 1, 155, 190, 88, 243, 25, 62, 185, 121, 136, 190, 97, 59, 13, 191, 152, 73, 145, 190, 227, 248, 235, 62, 78, 125, 152, 190, 76, 51, 28, 63, 29, 150, 170, 190, 98, 53, 59, 190, 8, 128, 28, 191};
                using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 32, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
                using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
                const CONTAINER_TYPE container = {(float*)memory}; 
            }
            using PARAMETER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::Plain::spec<parameters_memory::CONTAINER_TYPE, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::groups::Input, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::categories::Biases>;
            const RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::Plain::instance<PARAMETER_SPEC> parameters = {parameters_memory::container};
        }
    }
    namespace layer_0 {
        using SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::layers::dense::Specification<float, unsigned long, 3, 32, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::activation_functions::ActivationFunction::RELU, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::groups::Input, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamicTag, true, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>; 
        template <typename CAPABILITY>
        using TEMPLATE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::layers::dense::Layer<CAPABILITY, SPEC>;
        using CAPABILITY = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::layer_capability::Forward;
        using TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::layers::dense::Layer<CAPABILITY, SPEC>;
        const TYPE layer = {weights::parameters, biases::parameters};
    }
    namespace layer_1 {
        namespace weights {
            namespace parameters_memory {
                static_assert(sizeof(unsigned char) == 1);
                alignas(float) const unsigned char memory[] = {148, 167, 48, 190, 24, 11, 136, 61, 214, 142, 193, 190, 101, 164, 137, 62, 48, 27, 30, 190, 56, 194, 244, 61, 141, 41, 11, 62, 40, 32, 203, 61, 210, 115, 7, 62, 125, 25, 155, 62, 132, 118, 176, 189, 139, 94, 72, 191, 73, 144, 169, 60, 198, 92, 220, 190, 121, 185, 153, 191, 255, 44, 70, 191, 68, 14, 90, 60, 47, 109, 124, 62, 55, 60, 153, 62, 138, 132, 134, 62, 39, 14, 84, 62, 212, 69, 62, 190, 163, 135, 7, 191, 18, 241, 20, 191, 228, 213, 25, 61, 116, 11, 56, 191, 33, 71, 226, 61, 177, 76, 27, 61, 149, 226, 151, 62, 66, 0, 185, 60, 58, 62, 191, 190, 220, 182, 4, 191, 248, 230, 212, 190, 183, 218, 188, 61, 69, 123, 131, 188, 178, 187, 201, 188, 70, 202, 137, 187, 179, 157, 215, 61, 133, 232, 213, 189, 125, 116, 48, 62, 93, 88, 158, 189, 175, 141, 241, 61, 120, 59, 143, 189, 97, 112, 87, 61, 204, 217, 163, 189, 75, 78, 86, 62, 160, 96, 185, 62, 31, 205, 202, 189, 145, 138, 191, 61, 145, 164, 86, 62, 141, 161, 232, 61, 71, 4, 117, 62, 115, 222, 19, 62, 177, 18, 5, 62, 130, 111, 87, 62, 13, 4, 28, 62, 127, 144, 96, 191, 134, 175, 76, 62, 70, 140, 84, 61, 214, 177, 103, 190, 76, 45, 136, 61, 88, 168, 160, 60, 41, 129, 134, 190, 131, 131, 97, 62, 249, 180, 209, 190, 133, 140, 174, 62, 214, 25, 80, 62, 209, 71, 130, 189, 214, 170, 67, 190, 126, 115, 130, 189, 176, 220, 140, 191, 244, 74, 57, 62, 116, 254, 121, 191, 103, 158, 39, 188, 9, 48, 228, 188, 160, 103, 26, 190, 107, 96, 243, 189, 46, 186, 153, 60, 47, 117, 144, 59, 206, 197, 126, 61, 125, 26, 129, 62, 78, 171, 183, 62, 177, 231, 143, 59, 153, 235, 110, 62, 31, 44, 68, 191, 122, 210, 175, 190, 196, 140, 32, 61, 6, 225, 200, 62, 83, 96, 103, 191, 76, 101, 81, 62, 199, 74, 148, 191, 220, 127, 40, 190, 70, 176, 182, 190, 123, 54, 181, 62, 73, 16, 198, 190, 150, 131, 55, 191, 144, 204, 0, 63, 18, 9, 57, 189, 28, 100, 77, 190, 134, 185, 149, 190, 31, 90, 165, 62, 213, 196, 115, 62, 70, 220, 132, 62, 25, 190, 198, 189, 155, 125, 187, 62, 112, 247, 66, 60, 151, 70, 251, 61, 11, 91, 146, 189, 225, 11, 162, 190, 173, 218, 244, 189, 47, 14, 64, 190, 108, 189, 87, 191, 238, 166, 3, 61, 10, 72, 86, 62, 40, 199, 50, 61, 40, 14, 93, 189, 225, 114, 114, 62, 27, 64, 73, 61, 40, 167, 157, 190, 211, 92, 17, 191, 178, 133, 102, 62, 75, 252, 86, 189, 127, 211, 187, 61, 238, 31, 106, 62, 185, 77, 238, 61, 194, 252, 250, 189, 239, 186, 85, 62, 15, 120, 29, 190, 252, 235, 242, 190, 51, 135, 221, 189, 90, 3, 14, 60, 254, 51, 76, 62, 240, 140, 84, 59, 83, 24, 168, 189, 11, 57, 72, 190, 74, 97, 82, 189, 66, 88, 215, 189, 136, 115, 220, 61, 185, 48, 181, 189, 122, 190, 48, 62, 66, 175, 240, 189, 236, 18, 19, 62, 186, 41, 206, 62, 191, 88, 152, 62, 157, 154, 15, 190, 10, 11, 64, 190, 176, 42, 30, 62, 82, 223, 46, 190, 226, 65, 11, 190, 170, 27, 27, 191, 230, 183, 100, 62, 104, 151, 42, 191, 90, 5, 64, 191, 209, 120, 3, 188, 222, 148, 50, 62, 146, 248, 25, 190, 146, 101, 131, 62, 222, 77, 128, 61, 203, 39, 214, 190, 3, 95, 0, 63, 12, 175, 186, 190, 55, 147, 150, 190, 189, 175, 224, 188, 231, 19, 248, 188, 121, 106, 80, 61, 131, 135, 44, 190, 205, 230, 121, 62, 94, 84, 164, 62, 198, 49, 84, 62, 196, 190, 6, 191, 7, 189, 161, 190, 12, 253, 219, 62, 211, 90, 151, 62, 199, 196, 208, 189, 85, 234, 165, 62, 240, 14, 52, 189, 205, 153, 35, 62, 168, 194, 10, 190, 177, 186, 135, 62, 152, 246, 124, 190, 21, 57, 204, 189, 128, 109, 97, 190, 75, 169, 254, 61, 59, 72, 139, 189, 235, 168, 56, 62, 251, 206, 37, 62, 251, 92, 86, 190, 131, 84, 243, 188, 120, 27, 205, 189, 241, 65, 22, 190, 199, 25, 97, 190, 168, 119, 85, 59, 126, 73, 131, 62, 216, 137, 127, 62, 214, 50, 75, 190, 94, 78, 169, 189, 169, 182, 116, 190, 57, 119, 139, 61, 19, 202, 18, 62, 188, 176, 145, 190, 178, 231, 103, 60, 116, 15, 12, 61, 199, 86, 238, 189, 225, 235, 197, 190, 155, 91, 18, 191, 67, 0, 171, 61, 98, 50, 134, 61, 158, 245, 246, 190, 47, 51, 177, 189, 211, 121, 142, 62, 221, 54, 37, 191, 186, 28, 134, 62, 255, 149, 3, 62, 130, 85, 112, 190, 181, 60, 108, 61, 97, 203, 99, 189, 72, 71, 182, 190, 24, 165, 24, 191, 205, 202, 23, 61, 148, 152, 1, 191, 217, 84, 168, 62, 197, 135, 124, 61, 230, 67, 157, 61, 137, 7, 139, 62, 138, 61, 207, 190, 177, 86, 15, 191, 38, 56, 81, 61, 9, 100, 33, 62, 111, 131, 64, 60, 52, 61, 166, 188, 1, 253, 184, 188, 74, 119, 111, 62, 24, 29, 174, 190, 28, 226, 100, 61, 92, 224, 57, 190, 218, 59, 10, 61, 77, 9, 36, 190, 96, 156, 69, 62, 4, 108, 14, 63, 194, 27, 216, 62, 102, 139, 121, 189, 138, 205, 56, 190, 171, 247, 53, 62, 116, 245, 141, 190, 70, 221, 99, 190, 244, 232, 191, 190, 78, 172, 143, 62, 225, 1, 24, 191, 253, 163, 182, 190, 179, 120, 199, 190, 81, 119, 158, 60, 76, 140, 38, 62, 55, 174, 170, 61, 187, 85, 79, 190, 179, 253, 223, 190, 136, 13, 129, 62, 165, 246, 103, 62, 183, 182, 27, 62, 252, 71, 215, 190, 112, 253, 187, 190, 154, 30, 148, 62, 106, 108, 182, 189, 47, 212, 8, 190, 246, 148, 13, 62, 184, 22, 28, 190, 22, 118, 180, 189, 176, 110, 10, 62, 80, 115, 50, 62, 0, 129, 246, 190, 83, 148, 240, 60, 219, 30, 59, 62, 76, 191, 42, 190, 48, 147, 100, 62, 212, 144, 163, 62, 209, 58, 209, 189, 83, 21, 95, 62, 151, 213, 250, 60, 92, 147, 18, 62, 227, 150, 138, 62, 167, 44, 130, 190, 53, 108, 80, 190, 174, 158, 11, 190, 183, 14, 250, 61, 107, 196, 123, 188, 41, 195, 24, 190, 114, 222, 154, 190, 73, 232, 83, 62, 251, 240, 24, 62, 104, 92, 233, 190, 110, 197, 131, 62, 191, 169, 104, 189, 73, 247, 50, 62, 244, 250, 184, 189, 147, 130, 220, 61, 117, 181, 137, 191, 74, 187, 48, 62, 60, 235, 106, 191, 26, 202, 59, 190, 69, 7, 28, 189, 156, 225, 180, 189, 136, 137, 227, 62, 108, 125, 24, 190, 193, 47, 89, 62, 17, 243, 52, 62, 227, 118, 227, 61, 215, 221, 58, 62, 110, 255, 231, 189, 170, 135, 111, 62, 38, 102, 158, 190, 8, 3, 191, 189, 164, 149, 33, 62, 5, 34, 155, 62, 141, 233, 26, 191, 39, 7, 172, 61, 34, 15, 195, 60, 92, 77, 12, 190, 251, 127, 8, 191, 31, 62, 109, 62, 99, 213, 132, 190, 51, 205, 218, 189, 23, 105, 202, 62, 119, 100, 7, 60, 138, 100, 186, 190, 201, 176, 215, 190, 140, 113, 209, 190, 24, 5, 83, 62, 186, 214, 170, 189, 85, 69, 121, 62, 74, 9, 241, 187, 241, 55, 139, 60, 17, 246, 75, 62, 237, 170, 194, 190, 96, 25, 44, 191, 105, 156, 138, 188, 16, 148, 91, 190, 236, 73, 228, 190, 37, 36, 204, 189, 65, 192, 171, 62, 195, 56, 89, 189, 114, 15, 39, 62, 58, 99, 69, 190, 98, 14, 15, 191, 47, 91, 129, 189, 215, 173, 14, 191, 189, 186, 134, 189, 11, 220, 78, 190, 208, 177, 191, 189, 58, 75, 148, 62, 203, 117, 226, 189, 120, 136, 84, 190, 47, 141, 155, 62, 155, 19, 130, 62, 21, 58, 241, 61, 158, 23, 141, 61, 112, 28, 200, 190, 77, 58, 145, 190, 134, 157, 52, 62, 216, 76, 150, 61, 124, 42, 129, 189, 117, 142, 11, 190, 22, 63, 156, 189, 88, 86, 218, 189, 223, 185, 248, 189, 137, 194, 8, 62, 142, 133, 9, 190, 4, 184, 213, 61, 224, 219, 127, 62, 180, 62, 213, 190, 81, 128, 225, 189, 4, 122, 225, 61, 17, 190, 150, 190, 191, 170, 35, 61, 223, 162, 161, 189, 201, 87, 163, 61, 127, 50, 1, 190, 234, 127, 176, 189, 109, 51, 137, 190, 40, 24, 3, 61, 122, 210, 46, 60, 215, 152, 145, 189, 89, 2, 246, 60, 87, 223, 46, 61, 22, 16, 204, 60, 203, 117, 143, 61, 241, 177, 24, 63, 101, 244, 203, 188, 151, 104, 78, 190, 203, 121, 147, 190, 24, 9, 185, 62, 116, 114, 147, 61, 158, 76, 16, 189, 45, 114, 10, 62, 153, 8, 165, 61, 239, 71, 58, 62, 183, 220, 104, 62, 247, 178, 135, 190, 114, 117, 213, 190, 149, 86, 10, 190, 125, 174, 190, 189, 146, 157, 1, 191, 185, 39, 130, 188, 113, 45, 123, 62, 76, 30, 131, 190, 144, 110, 112, 189, 205, 162, 48, 189, 10, 218, 50, 190, 30, 215, 9, 61, 153, 39, 49, 191, 117, 157, 218, 188, 100, 25, 184, 189, 181, 8, 165, 61, 61, 222, 232, 62, 190, 191, 216, 189, 66, 99, 24, 189, 29, 89, 196, 62, 25, 164, 96, 190, 238, 81, 63, 191, 122, 116, 22, 62, 113, 71, 244, 189, 47, 139, 91, 62, 43, 31, 51, 190, 171, 57, 213, 190, 170, 25, 181, 191, 112, 213, 139, 62, 35, 93, 177, 191, 44, 143, 67, 190, 229, 27, 74, 190, 194, 252, 4, 62, 108, 56, 155, 62, 83, 123, 199, 60, 232, 106, 53, 62, 225, 135, 108, 60, 55, 174, 56, 60, 234, 102, 131, 189, 180, 65, 39, 62, 148, 47, 49, 62, 253, 155, 67, 191, 94, 230, 130, 190, 86, 92, 93, 62, 215, 221, 231, 62, 124, 189, 118, 191, 148, 176, 150, 62, 65, 218, 96, 190, 247, 150, 181, 190, 24, 119, 1, 191, 45, 100, 41, 62, 28, 236, 227, 190, 87, 123, 32, 58, 221, 136, 165, 189, 156, 121, 189, 189, 234, 173, 5, 62, 250, 201, 182, 189, 99, 228, 42, 190, 180, 82, 104, 189, 69, 230, 87, 61, 97, 50, 238, 189, 104, 48, 0, 62, 235, 83, 36, 190, 48, 249, 164, 61, 126, 174, 138, 61, 194, 186, 61, 190, 250, 32, 139, 186, 9, 30, 69, 61, 158, 107, 49, 61, 138, 13, 186, 61, 101, 110, 33, 189, 103, 179, 82, 190, 165, 78, 9, 62, 120, 182, 229, 60, 207, 157, 202, 59, 163, 43, 134, 188, 27, 71, 46, 190, 184, 78, 34, 190, 166, 229, 48, 190, 108, 71, 6, 62, 125, 30, 237, 189, 62, 144, 203, 189, 248, 41, 31, 59, 64, 104, 34, 62, 194, 235, 79, 190, 226, 194, 48, 62, 11, 27, 116, 62, 249, 113, 138, 189, 6, 86, 207, 61, 43, 120, 1, 190, 10, 76, 12, 62, 195, 87, 65, 62, 34, 29, 236, 189, 55, 221, 125, 62, 96, 22, 62, 61, 115, 123, 23, 62, 226, 168, 230, 190, 109, 190, 237, 188, 99, 74, 156, 190, 128, 166, 147, 190, 105, 199, 190, 190, 202, 159, 226, 60, 70, 250, 242, 61, 186, 225, 173, 189, 109, 114, 170, 62, 185, 54, 143, 189, 254, 65, 50, 190, 57, 150, 6, 62, 54, 1, 86, 190, 222, 1, 208, 190, 101, 43, 76, 191, 82, 33, 95, 62, 227, 185, 130, 62, 131, 229, 128, 62, 71, 72, 29, 61, 250, 35, 164, 62, 175, 11, 21, 190, 111, 207, 192, 190, 163, 156, 167, 189, 151, 25, 189, 190, 142, 111, 214, 59, 253, 97, 3, 62, 79, 214, 159, 190, 127, 88, 251, 59, 222, 13, 198, 61, 159, 126, 211, 61, 124, 66, 253, 190, 4, 26, 195, 190, 197, 113, 204, 62, 156, 98, 97, 62, 104, 174, 51, 62, 55, 239, 137, 62, 181, 99, 148, 190, 9, 135, 138, 62, 5, 5, 162, 190, 245, 109, 56, 188, 27, 228, 153, 190, 175, 137, 111, 190, 170, 191, 52, 61, 233, 134, 237, 188, 244, 249, 81, 189, 53, 49, 96, 61, 100, 211, 197, 62, 124, 163, 210, 189, 193, 193, 142, 62, 83, 62, 206, 189, 120, 152, 242, 189, 64, 19, 158, 189, 63, 211, 236, 189, 180, 147, 223, 190, 159, 200, 33, 190, 19, 25, 138, 62, 186, 252, 35, 190, 53, 76, 125, 189, 6, 183, 126, 61, 65, 178, 73, 61, 10, 239, 24, 61, 68, 71, 101, 189, 98, 121, 3, 190, 9, 250, 15, 62, 19, 193, 236, 190, 192, 240, 135, 61, 4, 161, 78, 62, 172, 31, 173, 61, 169, 135, 206, 62, 80, 233, 250, 61, 58, 71, 94, 190, 181, 111, 59, 190, 23, 83, 252, 61, 36, 163, 190, 186, 192, 221, 214, 62, 92, 24, 100, 61, 183, 225, 199, 61, 100, 150, 73, 190, 242, 71, 84, 62, 100, 141, 136, 189, 27, 120, 180, 61, 130, 45, 29, 189, 178, 182, 105, 62, 27, 242, 99, 190, 240, 223, 162, 62, 165, 192, 139, 59, 98, 44, 20, 62, 171, 59, 236, 189, 179, 225, 145, 189, 33, 78, 68, 62, 47, 101, 41, 191, 85, 171, 21, 190, 87, 104, 138, 190, 203, 31, 166, 190, 229, 250, 241, 190, 116, 196, 146, 190, 178, 130, 124, 61, 79, 188, 39, 189, 110, 121, 54, 190, 248, 168, 28, 62, 7, 76, 77, 190, 168, 150, 43, 62, 125, 214, 46, 191, 225, 8, 178, 61, 63, 229, 38, 189, 79, 214, 155, 189, 69, 204, 206, 189, 143, 18, 153, 62, 104, 41, 112, 62, 126, 47, 87, 190, 25, 103, 213, 60, 191, 146, 10, 189, 157, 158, 182, 190, 183, 83, 214, 190, 171, 139, 64, 189, 122, 3, 233, 189, 226, 47, 134, 190, 58, 121, 33, 61, 239, 7, 42, 190, 193, 76, 174, 188, 66, 126, 248, 189, 227, 63, 156, 189, 89, 224, 104, 61, 164, 203, 22, 62, 238, 163, 48, 62, 204, 225, 126, 61, 184, 243, 64, 190, 17, 248, 143, 61, 71, 110, 227, 189, 170, 157, 242, 188, 157, 129, 168, 61, 157, 94, 51, 190, 240, 99, 146, 60, 4, 129, 126, 61, 125, 213, 223, 189, 197, 38, 197, 189, 48, 218, 115, 61, 135, 86, 198, 61, 218, 172, 169, 189, 185, 96, 49, 190, 143, 109, 198, 188, 182, 106, 14, 61, 226, 148, 71, 189, 142, 13, 251, 189, 129, 35, 195, 188, 61, 87, 23, 190, 72, 176, 205, 189, 80, 149, 65, 60, 51, 214, 2, 190, 172, 75, 138, 62, 79, 27, 61, 62, 182, 252, 157, 189, 221, 162, 131, 190, 205, 94, 196, 61, 218, 88, 38, 62, 64, 200, 29, 191, 92, 8, 163, 61, 70, 133, 175, 190, 28, 66, 168, 61, 65, 154, 65, 190, 185, 121, 21, 62, 153, 4, 152, 190, 232, 112, 122, 189, 126, 51, 94, 62, 53, 225, 184, 190, 152, 25, 73, 62, 188, 145, 17, 62, 55, 190, 166, 190, 19, 27, 106, 60, 155, 15, 199, 190, 235, 206, 138, 61, 184, 157, 144, 189, 42, 37, 107, 189, 29, 197, 168, 59, 119, 236, 24, 61, 17, 223, 124, 190, 250, 3, 208, 61, 75, 235, 193, 62, 228, 166, 225, 190, 193, 78, 193, 61, 209, 70, 153, 62, 29, 105, 111, 62, 118, 244, 229, 61, 54, 216, 162, 190, 229, 245, 60, 190, 163, 180, 1, 62, 227, 222, 211, 61, 44, 6, 44, 190, 66, 191, 34, 190, 161, 35, 236, 190, 90, 197, 235, 188, 8, 129, 27, 190, 180, 16, 54, 62, 100, 67, 30, 191, 103, 127, 134, 61, 196, 12, 160, 189, 142, 37, 104, 190, 164, 196, 120, 61, 179, 228, 146, 62, 186, 224, 218, 189, 99, 64, 190, 62, 147, 87, 65, 187, 139, 218, 28, 62, 119, 93, 233, 187, 206, 117, 206, 188, 171, 2, 77, 189, 87, 45, 15, 62, 42, 8, 250, 189, 239, 72, 190, 189, 117, 15, 104, 62, 167, 60, 73, 60, 37, 94, 114, 61, 23, 106, 100, 61, 112, 217, 234, 62, 37, 155, 154, 61, 246, 41, 57, 190, 57, 207, 96, 190, 108, 37, 154, 62, 175, 122, 65, 62, 240, 93, 101, 62, 227, 71, 138, 190, 113, 91, 232, 59, 226, 232, 44, 62, 0, 239, 119, 61, 201, 65, 143, 190, 153, 20, 206, 190, 134, 148, 159, 189, 201, 142, 160, 189, 246, 45, 133, 191, 151, 43, 177, 189, 90, 130, 202, 62, 165, 50, 74, 190, 58, 187, 246, 189, 240, 79, 207, 61, 183, 237, 12, 190, 229, 28, 25, 190, 19, 118, 34, 191, 132, 226, 37, 190, 125, 96, 92, 190, 22, 157, 172, 190, 189, 0, 13, 63, 185, 189, 134, 189, 6, 245, 29, 189, 93, 212, 161, 62, 217, 180, 117, 189, 60, 53, 150, 189, 242, 191, 33, 191, 75, 223, 34, 61, 219, 80, 158, 62, 97, 230, 19, 62, 33, 135, 50, 190, 115, 29, 42, 62, 129, 56, 27, 189, 46, 127, 145, 189, 75, 110, 130, 62, 200, 105, 65, 62, 165, 119, 55, 191, 60, 88, 132, 61, 65, 193, 98, 190, 55, 30, 147, 191, 187, 108, 11, 188, 232, 203, 145, 190, 89, 216, 51, 191, 191, 119, 204, 62, 88, 194, 193, 190, 79, 204, 156, 62, 84, 194, 126, 190, 208, 118, 41, 62, 5, 155, 11, 191, 252, 48, 95, 189, 224, 94, 22, 191, 180, 213, 155, 60, 155, 2, 120, 190, 92, 41, 255, 59, 152, 34, 154, 190, 254, 223, 12, 190, 167, 90, 239, 190, 22, 11, 237, 61, 34, 103, 6, 62, 230, 52, 56, 190, 199, 255, 129, 190, 183, 101, 83, 62, 36, 10, 51, 189, 50, 166, 254, 59, 153, 151, 2, 191, 62, 123, 35, 60, 57, 100, 166, 190, 202, 169, 29, 61, 143, 120, 129, 61, 132, 59, 192, 60, 239, 171, 114, 62, 211, 95, 161, 62, 228, 240, 193, 60, 119, 117, 186, 188, 204, 191, 189, 189, 144, 233, 39, 190, 183, 42, 19, 190, 165, 90, 157, 61, 28, 5, 205, 61, 206, 147, 239, 189, 166, 134, 203, 189, 3, 190, 175, 62, 44, 140, 106, 190, 74, 192, 215, 190, 95, 72, 128, 189, 197, 205, 193, 190, 179, 104, 57, 190, 254, 94, 71, 62, 160, 223, 150, 189, 107, 153, 240, 59, 252, 23, 123, 60, 20, 205, 39, 190, 146, 64, 65, 61, 239, 31, 92, 189, 74, 112, 199, 61, 55, 124, 211, 61, 116, 118, 254, 188, 182, 192, 8, 62, 189, 145, 51, 190, 58, 122, 133, 189, 150, 15, 164, 189, 138, 141, 41, 189, 78, 149, 146, 61, 103, 154, 28, 62, 30, 109, 244, 59, 99, 152, 18, 190, 210, 80, 25, 190, 218, 217, 19, 190, 25, 217, 203, 61, 181, 223, 1, 190, 167, 132, 107, 189, 14, 196, 8, 190, 237, 119, 31, 189, 23, 6, 174, 61, 233, 210, 6, 62, 221, 132, 117, 188, 102, 191, 2, 190, 183, 219, 197, 61, 197, 179, 13, 190, 125, 187, 197, 189, 209, 223, 226, 61, 184, 69, 149, 61, 238, 82, 225, 189, 121, 199, 146, 190, 141, 13, 238, 61, 210, 34, 84, 190, 128, 194, 254, 61, 171, 56, 180, 62, 250, 50, 80, 189, 80, 230, 21, 62, 68, 98, 226, 61, 25, 19, 42, 62, 47, 52, 230, 190, 230, 106, 74, 61, 1, 75, 217, 188, 100, 137, 189, 190, 25, 55, 84, 191, 84, 95, 183, 190, 218, 128, 140, 62, 202, 94, 138, 61, 134, 47, 112, 189, 186, 78, 95, 188, 245, 40, 153, 190, 17, 168, 39, 191, 63, 208, 94, 191, 69, 82, 228, 187, 221, 247, 199, 190, 219, 167, 116, 61, 76, 191, 153, 62, 94, 199, 102, 61, 27, 132, 91, 190, 111, 63, 210, 61, 13, 188, 119, 190, 93, 154, 16, 190, 161, 143, 130, 187, 136, 194, 51, 189, 42, 116, 164, 62, 87, 231, 32, 189, 137, 190, 198, 188, 177, 49, 242, 61, 237, 180, 135, 60, 118, 5, 128, 190, 171, 201, 4, 190, 57, 251, 237, 61, 120, 204, 103, 62, 221, 89, 130, 190, 231, 145, 99, 61, 218, 120, 225, 61, 113, 205, 151, 190, 54, 169, 121, 188, 131, 37, 76, 189, 146, 67, 163, 62, 66, 86, 111, 190, 32, 140, 175, 61, 219, 89, 244, 190, 13, 41, 59, 62, 123, 222, 94, 191, 142, 112, 159, 191, 191, 248, 164, 189, 43, 31, 243, 188, 46, 52, 242, 61, 38, 155, 83, 62, 175, 16, 220, 61, 56, 148, 173, 190, 131, 180, 94, 61, 0, 253, 77, 62, 148, 35, 130, 62, 134, 236, 227, 188, 168, 31, 18, 191, 53, 64, 30, 62, 212, 95, 45, 62, 238, 138, 209, 190, 134, 224, 236, 190, 34, 118, 33, 191, 210, 224, 178, 190, 145, 58, 190, 190, 219, 144, 85, 190, 153, 229, 30, 191, 183, 14, 152, 61, 224, 204, 236, 62, 21, 210, 77, 190, 167, 16, 36, 61, 230, 42, 149, 59, 192, 173, 118, 190, 5, 244, 190, 61, 210, 55, 180, 190, 65, 223, 161, 190, 50, 163, 156, 62, 152, 106, 207, 190, 33, 170, 75, 191, 245, 166, 127, 189, 6, 203, 204, 189, 156, 132, 220, 188, 131, 88, 232, 61, 163, 85, 71, 190, 192, 80, 138, 61, 165, 146, 141, 62, 125, 172, 17, 62, 149, 231, 224, 189, 234, 210, 24, 61, 91, 66, 33, 190, 15, 103, 220, 189, 24, 135, 18, 190, 208, 167, 11, 190, 223, 131, 112, 189, 134, 66, 235, 188, 95, 184, 156, 61, 24, 159, 12, 190, 37, 46, 130, 61, 72, 30, 159, 189, 161, 60, 9, 62, 167, 118, 67, 190, 23, 17, 195, 189, 228, 178, 146, 189, 124, 166, 137, 189, 6, 204, 165, 61, 133, 55, 226, 189, 152, 46, 69, 190, 236, 51, 58, 57, 75, 217, 181, 61, 191, 38, 176, 188, 54, 135, 41, 62, 143, 170, 147, 61, 142, 62, 235, 189, 42, 79, 40, 187, 248, 17, 246, 189, 11, 162, 33, 190, 154, 116, 10, 62, 235, 212, 68, 60, 121, 126, 6, 191, 208, 224, 79, 189, 13, 106, 146, 189, 75, 18, 35, 190, 33, 155, 123, 190, 135, 217, 112, 189, 51, 105, 119, 191, 92, 235, 174, 62, 119, 77, 45, 191, 110, 218, 73, 61, 8, 187, 227, 188, 114, 51, 73, 189, 105, 106, 174, 189, 40, 43, 142, 62, 152, 95, 176, 62, 238, 231, 104, 62, 89, 245, 95, 62, 243, 188, 40, 62, 66, 30, 107, 188, 252, 229, 200, 61, 245, 30, 131, 190, 109, 39, 175, 60, 222, 197, 198, 62, 78, 19, 85, 62, 78, 77, 32, 191, 239, 188, 162, 62, 171, 86, 188, 60, 151, 207, 138, 190, 235, 31, 136, 190, 220, 219, 73, 62, 89, 208, 184, 190, 57, 9, 130, 62, 231, 222, 121, 191, 100, 235, 146, 190, 174, 178, 148, 62, 136, 24, 122, 60, 104, 238, 165, 190, 122, 36, 180, 61, 9, 190, 133, 190, 240, 27, 80, 62, 241, 250, 25, 190, 12, 54, 27, 62, 159, 118, 22, 189, 176, 98, 169, 188, 55, 171, 159, 61, 122, 42, 40, 62, 27, 47, 103, 62, 0, 115, 170, 62, 131, 237, 61, 61, 100, 134, 143, 61, 188, 127, 68, 190, 73, 85, 132, 190, 43, 22, 23, 190, 196, 86, 75, 190, 150, 248, 204, 61, 107, 20, 150, 190, 115, 21, 39, 191, 194, 226, 137, 62, 213, 143, 126, 188, 167, 192, 140, 190, 27, 64, 110, 61, 126, 109, 140, 62, 159, 51, 11, 191, 107, 19, 195, 62};
                using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 32, 32, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
                using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
                const CONTAINER_TYPE container = {(float*)memory}; 
            }
            using PARAMETER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::Plain::spec<parameters_memory::CONTAINER_TYPE, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::groups::Normal, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::categories::Weights>;
            const RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::Plain::instance<PARAMETER_SPEC> parameters = {parameters_memory::container};
        }
        namespace biases {
            namespace parameters_memory {
                static_assert(sizeof(unsigned char) == 1);
                alignas(float) const unsigned char memory[] = {105, 162, 187, 62, 86, 14, 163, 62, 160, 236, 193, 184, 119, 28, 47, 189, 122, 179, 20, 62, 188, 186, 162, 190, 182, 38, 219, 62, 250, 110, 188, 189, 220, 199, 196, 61, 118, 167, 128, 62, 58, 156, 208, 61, 68, 240, 151, 61, 189, 44, 103, 62, 33, 56, 154, 62, 169, 218, 78, 61, 239, 139, 48, 62, 214, 136, 62, 190, 140, 120, 60, 190, 214, 7, 50, 60, 144, 186, 115, 61, 23, 8, 171, 189, 210, 247, 173, 189, 136, 216, 56, 189, 215, 181, 112, 60, 139, 223, 82, 190, 107, 197, 52, 190, 69, 40, 49, 62, 253, 85, 176, 62, 239, 174, 123, 61, 133, 130, 240, 60, 215, 223, 93, 62, 47, 62, 14, 189};
                using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 32, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
                using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
                const CONTAINER_TYPE container = {(float*)memory}; 
            }
            using PARAMETER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::Plain::spec<parameters_memory::CONTAINER_TYPE, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::groups::Normal, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::categories::Biases>;
            const RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::Plain::instance<PARAMETER_SPEC> parameters = {parameters_memory::container};
        }
    }
    namespace layer_1 {
        using SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::layers::dense::Specification<float, unsigned long, 32, 32, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::activation_functions::ActivationFunction::RELU, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::groups::Normal, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamicTag, true, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>; 
        template <typename CAPABILITY>
        using TEMPLATE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::layers::dense::Layer<CAPABILITY, SPEC>;
        using CAPABILITY = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::layer_capability::Forward;
        using TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::layers::dense::Layer<CAPABILITY, SPEC>;
        const TYPE layer = {weights::parameters, biases::parameters};
    }
    namespace layer_2 {
        namespace weights {
            namespace parameters_memory {
                static_assert(sizeof(unsigned char) == 1);
                alignas(float) const unsigned char memory[] = {251, 212, 92, 63, 217, 214, 148, 189, 185, 46, 117, 191, 3, 136, 255, 62, 222, 99, 92, 190, 158, 178, 168, 62, 209, 25, 31, 63, 18, 211, 186, 190, 87, 165, 184, 61, 252, 219, 211, 190, 182, 239, 115, 63, 242, 150, 144, 187, 86, 132, 35, 63, 110, 102, 93, 191, 160, 76, 172, 188, 132, 244, 110, 62, 94, 225, 153, 62, 3, 37, 133, 190, 172, 236, 168, 189, 88, 119, 186, 61, 213, 220, 102, 62, 238, 101, 65, 62, 255, 1, 41, 63, 130, 209, 94, 63, 2, 57, 184, 190, 59, 45, 201, 189, 212, 124, 92, 63, 76, 73, 166, 189, 254, 217, 246, 62, 126, 72, 250, 189, 185, 201, 237, 190, 169, 199, 249, 190, 102, 64, 47, 62, 216, 134, 167, 190, 102, 213, 137, 62, 244, 162, 222, 62, 66, 73, 216, 190, 163, 147, 142, 189, 167, 45, 139, 188, 84, 230, 68, 62, 200, 180, 238, 190, 157, 15, 112, 190, 103, 36, 203, 61, 143, 53, 18, 190, 181, 81, 155, 61, 223, 143, 110, 62, 205, 214, 206, 61, 56, 237, 143, 190, 201, 156, 93, 62, 170, 95, 133, 62, 196, 166, 178, 190, 148, 245, 116, 188, 254, 225, 166, 189, 106, 220, 50, 189, 239, 21, 42, 63, 7, 16, 104, 61, 159, 207, 146, 60, 54, 30, 3, 62, 29, 93, 164, 62, 221, 110, 208, 190, 35, 220, 233, 190, 121, 133, 237, 61, 42, 142, 75, 190, 200, 31, 137, 62};
                using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 2, 32, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
                using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
                const CONTAINER_TYPE container = {(float*)memory}; 
            }
            using PARAMETER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::Plain::spec<parameters_memory::CONTAINER_TYPE, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::groups::Output, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::categories::Weights>;
            const RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::Plain::instance<PARAMETER_SPEC> parameters = {parameters_memory::container};
        }
        namespace biases {
            namespace parameters_memory {
                static_assert(sizeof(unsigned char) == 1);
                alignas(float) const unsigned char memory[] = {94, 130, 144, 189, 42, 48, 197, 190};
                using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 2, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
                using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
                const CONTAINER_TYPE container = {(float*)memory}; 
            }
            using PARAMETER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::Plain::spec<parameters_memory::CONTAINER_TYPE, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::groups::Output, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::categories::Biases>;
            const RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::Plain::instance<PARAMETER_SPEC> parameters = {parameters_memory::container};
        }
    }
    namespace layer_2 {
        using SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::layers::dense::Specification<float, unsigned long, 32, 2, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::activation_functions::ActivationFunction::IDENTITY, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::groups::Output, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamicTag, true, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>; 
        template <typename CAPABILITY>
        using TEMPLATE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::layers::dense::Layer<CAPABILITY, SPEC>;
        using CAPABILITY = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::layer_capability::Forward;
        using TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::layers::dense::Layer<CAPABILITY, SPEC>;
        const TYPE layer = {weights::parameters, biases::parameters};
    }
    namespace model_definition {
        using CAPABILITY = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::layer_capability::Forward; 
        using IF = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn_models::sequential::Interface<CAPABILITY>;
        using MODEL = IF::Module<layer_0::TEMPLATE, IF::Module<layer_1::TEMPLATE, IF::Module<layer_2::TEMPLATE>>>;
    }
    using MODEL = model_definition::MODEL;
    const MODEL model = {layer_0::layer, {layer_1::layer, {layer_2::layer, {}}}};
}
// NOTE: This code export assumes that the endianness of the target platform is the same as the endianness of the source platform
#include <rl_tools/containers.h>
namespace rl_tools::checkpoint::example::input {
    static_assert(sizeof(unsigned char) == 1);
    alignas(float) const unsigned char memory[] = {184, 49, 22, 191, 7, 214, 174, 190, 72, 237, 13, 191};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 3, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

// NOTE: This code export assumes that the endianness of the target platform is the same as the endianness of the source platform
#include <rl_tools/containers.h>
namespace rl_tools::checkpoint::example::output {
    static_assert(sizeof(unsigned char) == 1);
    alignas(float) const unsigned char memory[] = {45, 250, 223, 191, 28, 122, 63, 191};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 2, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

namespace rl_tools::checkpoint::meta{
   char name[] = "experiments/2024-05-27_19-39-12/b738cd1_zoo_algorithm_environment/sac_pendulum-v1/0089/steps/000000000014000";
   char commit_hash[] = "b738cd18dcbee2b66aa05c642653771cd0e46c8b";
}