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
                alignas(float) const unsigned char memory[] = {39, 243, 205, 190, 56, 233, 126, 62, 43, 210, 114, 63, 44, 8, 85, 190, 226, 31, 11, 63, 126, 66, 6, 190, 114, 45, 196, 190, 209, 15, 138, 63, 96, 144, 27, 63, 42, 81, 171, 190, 77, 104, 181, 191, 146, 30, 115, 190, 245, 8, 183, 60, 117, 175, 126, 191, 220, 218, 55, 190, 191, 208, 43, 63, 12, 221, 162, 63, 92, 107, 177, 62, 104, 6, 89, 191, 172, 220, 23, 62, 206, 73, 54, 189, 62, 158, 37, 63, 137, 17, 216, 62, 68, 61, 47, 62, 131, 105, 104, 63, 226, 79, 26, 191, 212, 83, 201, 190, 99, 51, 226, 190, 42, 117, 30, 191, 32, 139, 179, 190, 143, 111, 130, 62, 96, 191, 53, 191, 28, 82, 86, 63, 147, 227, 183, 61, 193, 158, 83, 63, 132, 244, 59, 63, 231, 186, 135, 189, 181, 53, 177, 62, 145, 115, 6, 191, 22, 219, 181, 188, 19, 132, 57, 63, 196, 220, 238, 190, 74, 122, 117, 62, 132, 223, 4, 63, 181, 227, 112, 62, 32, 10, 210, 62, 19, 93, 33, 190, 237, 16, 61, 190, 30, 150, 187, 190, 162, 154, 101, 191, 126, 171, 228, 62, 182, 238, 182, 61, 54, 64, 72, 190, 145, 209, 187, 189, 119, 46, 127, 62, 212, 17, 200, 190, 233, 119, 83, 189, 209, 168, 105, 191, 225, 12, 88, 63, 216, 223, 49, 62, 179, 207, 68, 63, 189, 42, 147, 63, 239, 81, 197, 62, 187, 107, 158, 189, 101, 40, 85, 63, 215, 150, 232, 190, 22, 29, 165, 190, 201, 185, 34, 191, 26, 190, 43, 62, 53, 154, 167, 60, 202, 64, 50, 191, 183, 204, 37, 63, 229, 100, 149, 190, 49, 58, 149, 191, 121, 40, 139, 190, 165, 123, 158, 189, 245, 120, 184, 63, 198, 27, 149, 62, 111, 165, 73, 63, 215, 99, 6, 191, 104, 251, 195, 190, 88, 98, 254, 188, 93, 129, 118, 63, 237, 48, 134, 62, 218, 79, 41, 190, 132, 156, 164, 191, 134, 28, 21, 61, 162, 94, 235, 62, 195, 64, 63, 63, 140, 117, 31, 63, 14, 186, 181, 62, 164, 60, 176, 191, 205, 130, 167, 190, 168, 106, 21, 190, 145, 166, 57, 191, 253, 8, 12, 62};
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
                alignas(float) const unsigned char memory[] = {149, 153, 25, 191, 223, 174, 106, 190, 170, 72, 152, 190, 153, 16, 138, 190, 249, 181, 153, 62, 31, 14, 2, 190, 196, 102, 0, 63, 177, 85, 218, 62, 176, 109, 144, 191, 198, 144, 216, 189, 39, 6, 128, 190, 230, 202, 135, 62, 222, 11, 83, 62, 52, 220, 40, 62, 248, 103, 194, 62, 78, 245, 27, 191, 190, 38, 153, 190, 131, 184, 70, 62, 68, 189, 153, 62, 190, 50, 244, 61, 158, 120, 205, 190, 30, 87, 252, 62, 113, 6, 195, 62, 254, 141, 86, 190, 65, 185, 78, 190, 254, 235, 77, 62, 237, 85, 33, 191, 156, 249, 1, 62, 170, 54, 88, 62, 205, 14, 12, 62, 186, 212, 0, 61, 158, 238, 110, 61};
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
                alignas(float) const unsigned char memory[] = {55, 120, 102, 190, 136, 133, 130, 62, 224, 158, 164, 59, 129, 111, 252, 189, 95, 141, 83, 191, 89, 19, 190, 62, 100, 224, 7, 62, 126, 103, 72, 62, 59, 187, 147, 189, 229, 47, 49, 189, 237, 8, 8, 62, 47, 72, 58, 62, 255, 55, 220, 61, 186, 11, 137, 62, 168, 50, 213, 189, 168, 148, 211, 189, 61, 73, 44, 190, 65, 121, 220, 190, 204, 217, 7, 191, 208, 103, 91, 189, 52, 185, 173, 62, 185, 11, 120, 189, 226, 200, 67, 189, 104, 174, 45, 190, 37, 149, 233, 189, 218, 204, 238, 61, 254, 92, 7, 191, 223, 223, 175, 61, 193, 99, 77, 190, 112, 112, 136, 62, 56, 212, 155, 190, 206, 155, 180, 190, 144, 0, 10, 62, 37, 45, 186, 61, 88, 191, 26, 61, 3, 153, 61, 190, 0, 201, 165, 190, 179, 153, 220, 62, 83, 2, 160, 61, 160, 137, 121, 61, 222, 220, 65, 191, 130, 50, 47, 191, 57, 108, 84, 62, 213, 26, 39, 62, 254, 84, 54, 61, 123, 129, 159, 62, 145, 10, 66, 62, 103, 162, 78, 191, 252, 140, 148, 62, 117, 153, 158, 61, 174, 49, 177, 61, 184, 207, 19, 190, 252, 100, 11, 62, 77, 171, 91, 62, 148, 141, 110, 61, 24, 0, 79, 61, 43, 46, 224, 62, 193, 127, 218, 61, 220, 97, 135, 190, 25, 126, 104, 61, 194, 143, 215, 61, 159, 238, 47, 62, 65, 177, 134, 190, 134, 222, 52, 62, 10, 110, 143, 190, 138, 172, 203, 189, 223, 251, 81, 190, 216, 72, 96, 61, 206, 22, 238, 59, 7, 237, 172, 190, 141, 134, 219, 190, 6, 55, 140, 62, 196, 205, 7, 190, 217, 195, 62, 62, 224, 115, 20, 61, 14, 40, 18, 190, 114, 122, 2, 61, 208, 122, 89, 188, 229, 137, 29, 62, 123, 168, 220, 61, 127, 170, 105, 62, 145, 172, 60, 62, 143, 19, 70, 62, 208, 144, 139, 191, 199, 12, 201, 190, 45, 181, 60, 62, 121, 252, 16, 187, 190, 204, 185, 60, 89, 207, 237, 189, 98, 51, 207, 191, 84, 156, 18, 190, 243, 38, 194, 190, 3, 202, 154, 62, 147, 147, 228, 61, 77, 28, 133, 62, 247, 253, 148, 62, 187, 168, 113, 190, 19, 218, 46, 62, 169, 237, 244, 61, 116, 4, 226, 61, 112, 19, 254, 190, 45, 40, 173, 190, 16, 176, 177, 62, 33, 19, 198, 190, 123, 152, 100, 191, 43, 233, 66, 190, 223, 57, 151, 190, 81, 232, 66, 190, 146, 137, 210, 61, 206, 122, 30, 62, 225, 243, 48, 62, 26, 151, 47, 191, 65, 234, 24, 190, 14, 96, 131, 61, 240, 33, 85, 61, 131, 254, 140, 62, 68, 119, 109, 191, 146, 237, 236, 61, 167, 20, 211, 189, 226, 214, 192, 190, 209, 88, 98, 189, 17, 182, 90, 62, 42, 194, 154, 190, 188, 48, 119, 61, 106, 74, 127, 190, 24, 227, 25, 191, 237, 156, 188, 190, 34, 23, 186, 189, 158, 113, 48, 188, 248, 110, 167, 61, 106, 17, 62, 62, 161, 161, 28, 62, 140, 204, 13, 188, 234, 120, 200, 189, 147, 84, 21, 190, 137, 207, 21, 62, 113, 231, 40, 189, 35, 86, 243, 189, 178, 15, 143, 60, 204, 211, 49, 62, 5, 67, 249, 60, 54, 44, 49, 190, 54, 31, 239, 188, 195, 227, 241, 189, 52, 243, 244, 188, 163, 40, 54, 62, 177, 145, 81, 188, 111, 12, 58, 62, 84, 139, 67, 61, 91, 139, 41, 62, 199, 165, 130, 62, 159, 174, 180, 188, 158, 226, 106, 190, 76, 0, 47, 190, 253, 202, 104, 61, 251, 54, 193, 60, 103, 235, 13, 62, 206, 161, 78, 60, 0, 156, 226, 188, 67, 253, 133, 60, 20, 203, 155, 190, 111, 97, 245, 61, 127, 163, 48, 191, 154, 30, 170, 62, 171, 69, 91, 189, 152, 208, 141, 62, 207, 5, 19, 188, 94, 71, 198, 62, 122, 176, 20, 191, 255, 120, 9, 62, 251, 56, 58, 62, 27, 186, 204, 189, 12, 236, 127, 62, 105, 41, 51, 190, 166, 118, 105, 188, 86, 19, 19, 191, 78, 147, 229, 190, 76, 152, 193, 189, 47, 214, 182, 61, 127, 22, 41, 189, 53, 115, 25, 189, 146, 98, 155, 62, 245, 131, 10, 189, 125, 21, 239, 61, 126, 236, 124, 190, 157, 119, 113, 189, 200, 18, 76, 190, 135, 57, 174, 190, 7, 38, 58, 190, 46, 178, 218, 60, 12, 38, 55, 191, 15, 233, 144, 59, 52, 209, 118, 62, 188, 231, 210, 190, 14, 185, 12, 62, 76, 138, 76, 190, 122, 245, 91, 187, 190, 55, 22, 191, 11, 242, 23, 189, 56, 0, 114, 62, 45, 43, 198, 61, 95, 202, 160, 190, 213, 187, 219, 190, 187, 126, 11, 62, 106, 177, 201, 190, 101, 165, 233, 188, 174, 163, 204, 188, 21, 33, 39, 62, 70, 183, 147, 62, 227, 223, 108, 62, 26, 67, 55, 61, 20, 217, 133, 61, 124, 167, 59, 191, 19, 182, 143, 190, 134, 167, 46, 189, 46, 169, 190, 62, 118, 17, 20, 190, 107, 9, 107, 62, 68, 134, 253, 61, 162, 19, 146, 61, 108, 180, 251, 189, 108, 162, 41, 190, 43, 131, 159, 62, 220, 251, 162, 188, 176, 149, 60, 62, 109, 13, 42, 190, 52, 107, 117, 62, 198, 156, 37, 191, 1, 224, 151, 189, 122, 188, 56, 190, 140, 248, 90, 60, 181, 62, 31, 62, 43, 198, 117, 190, 139, 118, 145, 61, 26, 89, 223, 190, 247, 210, 83, 62, 109, 119, 122, 61, 221, 211, 128, 189, 215, 130, 87, 62, 23, 57, 20, 190, 42, 138, 246, 61, 228, 15, 68, 61, 118, 198, 213, 59, 177, 97, 164, 62, 94, 56, 185, 190, 8, 1, 21, 190, 151, 37, 164, 189, 79, 188, 209, 62, 186, 81, 149, 191, 125, 217, 55, 61, 116, 78, 194, 189, 103, 250, 117, 62, 27, 210, 76, 61, 222, 50, 131, 190, 148, 46, 143, 62, 139, 157, 183, 61, 166, 176, 14, 189, 194, 121, 1, 62, 218, 23, 6, 61, 76, 144, 214, 191, 231, 81, 0, 191, 119, 192, 156, 62, 60, 50, 185, 189, 74, 206, 109, 62, 224, 206, 172, 190, 249, 184, 135, 190, 244, 23, 13, 190, 108, 99, 76, 62, 37, 246, 56, 190, 248, 89, 121, 62, 82, 121, 139, 62, 243, 67, 11, 62, 211, 210, 139, 62, 249, 22, 34, 62, 238, 41, 198, 61, 236, 94, 167, 61, 227, 244, 218, 61, 19, 123, 110, 62, 126, 114, 156, 189, 68, 50, 147, 61, 250, 196, 176, 190, 67, 116, 223, 60, 105, 182, 6, 190, 129, 201, 115, 189, 194, 63, 234, 190, 5, 80, 82, 62, 245, 5, 207, 190, 17, 181, 229, 189, 101, 148, 166, 188, 242, 97, 0, 62, 0, 128, 191, 188, 229, 30, 185, 189, 65, 206, 147, 60, 40, 3, 216, 189, 138, 211, 10, 59, 169, 82, 217, 189, 247, 227, 21, 190, 151, 106, 16, 190, 85, 33, 197, 189, 88, 122, 210, 61, 59, 243, 41, 190, 208, 128, 5, 62, 184, 236, 255, 189, 107, 84, 25, 190, 239, 232, 175, 188, 181, 179, 153, 61, 135, 84, 238, 189, 129, 220, 28, 188, 84, 118, 53, 189, 112, 210, 175, 187, 31, 117, 201, 188, 166, 27, 94, 188, 140, 189, 29, 190, 6, 182, 131, 61, 253, 158, 162, 61, 30, 79, 220, 189, 122, 65, 197, 61, 219, 13, 8, 190, 73, 128, 204, 188, 64, 32, 217, 61, 17, 13, 96, 62, 219, 63, 191, 190, 189, 212, 11, 62, 207, 138, 143, 62, 4, 81, 143, 61, 215, 16, 79, 61, 77, 86, 212, 188, 223, 117, 166, 190, 239, 150, 197, 62, 19, 93, 153, 190, 32, 183, 119, 62, 170, 81, 73, 62, 1, 195, 4, 190, 167, 206, 3, 190, 20, 76, 3, 61, 246, 58, 157, 62, 133, 183, 26, 62, 132, 42, 89, 190, 111, 136, 132, 62, 69, 136, 233, 61, 56, 189, 161, 189, 84, 78, 103, 190, 19, 151, 114, 189, 225, 164, 147, 62, 62, 26, 229, 62, 74, 233, 18, 190, 163, 39, 190, 62, 150, 160, 122, 62, 229, 133, 21, 62, 229, 236, 168, 61, 48, 113, 226, 62, 66, 91, 189, 61, 197, 228, 183, 61, 97, 143, 119, 62, 130, 124, 60, 191, 50, 75, 221, 62, 81, 47, 28, 189, 64, 248, 170, 62, 65, 72, 107, 190, 168, 42, 172, 62, 153, 157, 69, 191, 240, 173, 111, 62, 232, 88, 150, 189, 181, 190, 79, 190, 129, 186, 164, 62, 247, 153, 174, 190, 227, 104, 51, 190, 145, 28, 25, 191, 206, 193, 249, 190, 192, 191, 75, 61, 244, 54, 39, 61, 159, 188, 138, 190, 233, 12, 69, 62, 145, 238, 169, 62, 228, 94, 72, 61, 40, 138, 3, 191, 221, 142, 91, 190, 247, 99, 50, 190, 174, 237, 180, 190, 108, 73, 95, 191, 12, 183, 128, 62, 217, 186, 245, 61, 249, 46, 59, 191, 79, 230, 56, 62, 236, 176, 0, 61, 87, 224, 36, 59, 74, 192, 35, 190, 98, 103, 217, 189, 49, 6, 106, 189, 185, 119, 167, 188, 28, 223, 37, 189, 254, 88, 150, 61, 66, 246, 127, 189, 143, 213, 0, 62, 246, 78, 119, 60, 206, 90, 211, 189, 87, 165, 158, 60, 22, 163, 14, 190, 237, 21, 156, 61, 89, 28, 232, 60, 117, 254, 234, 188, 78, 225, 130, 189, 212, 130, 19, 188, 167, 217, 213, 61, 6, 152, 254, 61, 38, 121, 158, 186, 139, 249, 7, 190, 160, 126, 222, 189, 98, 218, 178, 189, 94, 245, 70, 190, 182, 150, 135, 61, 111, 27, 147, 61, 166, 36, 35, 190, 239, 52, 246, 61, 63, 124, 21, 190, 220, 117, 15, 62, 67, 19, 194, 190, 222, 252, 208, 189, 235, 147, 68, 191, 115, 120, 130, 61, 16, 247, 46, 62, 216, 72, 78, 62, 102, 118, 107, 191, 160, 69, 163, 62, 58, 166, 79, 61, 36, 107, 87, 190, 168, 23, 161, 61, 163, 7, 10, 190, 65, 67, 239, 61, 68, 213, 60, 189, 233, 252, 236, 61, 127, 186, 31, 62, 156, 126, 179, 62, 137, 195, 21, 190, 173, 2, 199, 61, 237, 129, 24, 191, 59, 240, 148, 59, 92, 177, 101, 189, 133, 103, 173, 61, 135, 231, 147, 189, 198, 139, 247, 61, 213, 218, 185, 191, 173, 117, 190, 60, 160, 0, 44, 191, 70, 128, 2, 62, 246, 65, 125, 62, 138, 216, 45, 60, 115, 125, 173, 62, 108, 167, 176, 61, 38, 235, 108, 190, 215, 144, 70, 61, 164, 47, 19, 190, 65, 13, 50, 62, 221, 177, 17, 191, 250, 139, 7, 190, 196, 236, 199, 62, 132, 142, 8, 61, 57, 27, 172, 61, 30, 139, 245, 190, 20, 130, 191, 61, 112, 124, 77, 189, 3, 145, 0, 61, 152, 168, 116, 62, 59, 170, 244, 62, 91, 35, 162, 62, 138, 90, 186, 61, 110, 42, 40, 61, 102, 215, 149, 62, 14, 160, 11, 191, 49, 202, 122, 190, 74, 147, 168, 62, 13, 223, 140, 62, 146, 111, 141, 190, 100, 235, 171, 60, 94, 75, 208, 189, 73, 89, 93, 62, 82, 28, 117, 61, 12, 53, 173, 189, 44, 103, 86, 62, 43, 179, 225, 187, 246, 96, 147, 62, 237, 115, 220, 60, 241, 131, 102, 62, 197, 154, 8, 191, 253, 178, 224, 190, 107, 88, 79, 61, 169, 87, 226, 189, 19, 63, 165, 190, 200, 190, 64, 190, 17, 20, 217, 190, 43, 244, 182, 60, 88, 168, 131, 62, 107, 214, 169, 60, 47, 16, 145, 62, 190, 46, 59, 189, 251, 6, 151, 190, 74, 161, 183, 62, 97, 201, 31, 190, 207, 86, 158, 62, 154, 163, 228, 61, 15, 5, 71, 61, 46, 114, 203, 61, 161, 48, 42, 190, 15, 68, 170, 62, 0, 169, 232, 62, 160, 196, 8, 62, 198, 112, 129, 189, 199, 83, 135, 61, 6, 254, 99, 186, 200, 200, 58, 62, 34, 200, 236, 188, 135, 180, 53, 62, 192, 65, 129, 189, 133, 140, 212, 189, 0, 96, 222, 189, 137, 174, 209, 188, 192, 97, 39, 190, 106, 80, 41, 62, 126, 197, 81, 60, 181, 45, 30, 189, 127, 46, 158, 61, 40, 242, 240, 61, 208, 121, 17, 190, 238, 191, 51, 190, 41, 37, 89, 185, 101, 229, 240, 189, 204, 121, 239, 186, 168, 164, 226, 189, 62, 197, 92, 61, 19, 7, 16, 190, 81, 159, 173, 186, 77, 239, 9, 190, 206, 3, 128, 187, 31, 196, 121, 188, 1, 221, 41, 61, 80, 212, 252, 61, 154, 97, 164, 188, 32, 150, 92, 61, 138, 22, 184, 189, 192, 49, 217, 61, 197, 103, 255, 60, 3, 183, 31, 190, 1, 186, 90, 60, 117, 187, 35, 190, 71, 86, 139, 62, 194, 53, 63, 62, 159, 159, 183, 61, 57, 210, 15, 191, 70, 66, 6, 62, 176, 195, 55, 191, 190, 78, 47, 62, 57, 210, 232, 62, 70, 91, 151, 62, 86, 195, 138, 61, 49, 218, 16, 191, 249, 64, 45, 62, 198, 9, 242, 189, 25, 191, 160, 62, 25, 145, 137, 62, 124, 31, 71, 63, 229, 75, 140, 62, 58, 222, 106, 62, 8, 131, 77, 62, 117, 158, 169, 62, 93, 252, 38, 191, 104, 147, 24, 62, 246, 55, 229, 61, 69, 216, 88, 62, 173, 184, 95, 191, 79, 60, 220, 61, 218, 132, 21, 61, 48, 55, 23, 62, 69, 204, 207, 189, 74, 61, 124, 190, 4, 141, 90, 62, 98, 155, 143, 189, 9, 205, 135, 61, 115, 112, 244, 61, 209, 10, 36, 187, 11, 139, 101, 61, 121, 9, 89, 60, 123, 131, 172, 189, 80, 53, 233, 189, 224, 75, 48, 62, 229, 31, 5, 62, 120, 160, 11, 62, 245, 195, 21, 190, 239, 209, 18, 62, 146, 52, 84, 189, 175, 244, 174, 189, 164, 108, 94, 189, 106, 1, 71, 189, 42, 26, 175, 188, 166, 28, 175, 61, 22, 190, 62, 190, 77, 201, 34, 189, 39, 199, 19, 190, 67, 122, 220, 189, 172, 46, 127, 190, 168, 119, 189, 61, 55, 232, 120, 61, 19, 149, 211, 189, 29, 172, 174, 61, 227, 86, 149, 189, 45, 66, 113, 190, 23, 183, 214, 61, 58, 236, 197, 189, 3, 255, 128, 190, 114, 108, 33, 62, 190, 203, 34, 188, 220, 57, 109, 188, 81, 123, 82, 62, 245, 106, 30, 62, 49, 151, 210, 190, 84, 9, 190, 62, 230, 53, 61, 191, 239, 92, 137, 61, 227, 83, 52, 191, 147, 39, 22, 190, 71, 91, 173, 188, 59, 22, 136, 190, 151, 22, 145, 188, 122, 159, 149, 61, 81, 226, 211, 61, 57, 89, 47, 62, 58, 39, 204, 189, 113, 60, 139, 62, 227, 71, 0, 63, 75, 226, 255, 190, 136, 14, 110, 61, 3, 112, 106, 62, 157, 24, 29, 190, 146, 93, 171, 62, 204, 15, 177, 62, 249, 2, 89, 61, 135, 35, 48, 61, 34, 190, 133, 62, 214, 58, 250, 190, 62, 239, 237, 61, 72, 90, 154, 62, 153, 28, 25, 62, 73, 44, 4, 190, 198, 235, 25, 62, 195, 144, 7, 62, 242, 232, 8, 61, 185, 94, 119, 190, 168, 239, 132, 62, 53, 23, 137, 62, 211, 176, 198, 190, 139, 2, 102, 62, 30, 222, 66, 189, 165, 146, 157, 62, 223, 144, 176, 189, 80, 213, 239, 189, 196, 122, 148, 62, 189, 47, 189, 190, 179, 172, 128, 62, 135, 8, 202, 188, 70, 196, 190, 189, 3, 149, 65, 58, 63, 179, 40, 190, 74, 111, 240, 189, 132, 143, 143, 61, 226, 144, 34, 62, 255, 181, 98, 61, 75, 218, 213, 188, 10, 182, 137, 190, 26, 47, 26, 61, 48, 23, 188, 61, 52, 77, 32, 61, 205, 237, 6, 190, 56, 3, 18, 61, 253, 25, 146, 62, 159, 240, 236, 190, 11, 123, 92, 62, 198, 226, 6, 190, 171, 140, 10, 62, 49, 32, 54, 191, 134, 118, 78, 60, 177, 65, 145, 62, 42, 10, 221, 189, 244, 209, 80, 62, 255, 148, 198, 190, 62, 52, 191, 61, 109, 162, 216, 189, 55, 204, 115, 61, 192, 163, 94, 62, 47, 214, 189, 190, 134, 128, 79, 62, 78, 137, 25, 62, 103, 123, 42, 189, 41, 157, 25, 62, 60, 155, 203, 190, 15, 255, 167, 190, 62, 231, 64, 59, 164, 173, 135, 62, 228, 166, 27, 62, 210, 176, 161, 61, 80, 96, 13, 190, 139, 158, 3, 62, 41, 162, 160, 188, 169, 171, 182, 190, 210, 74, 22, 62, 141, 160, 138, 61, 151, 143, 151, 190, 189, 234, 50, 186, 158, 254, 14, 190, 200, 162, 185, 61, 174, 16, 29, 185, 71, 93, 144, 62, 140, 15, 246, 61, 139, 62, 106, 62, 87, 250, 0, 62, 25, 254, 144, 61, 104, 239, 86, 62, 192, 20, 255, 59, 225, 1, 114, 62, 155, 95, 14, 190, 234, 250, 47, 62, 137, 78, 32, 189, 159, 40, 121, 191, 112, 210, 128, 62, 104, 0, 195, 62, 37, 108, 102, 189, 163, 202, 0, 62, 188, 2, 125, 62, 208, 138, 151, 188, 219, 139, 239, 190, 116, 55, 58, 190, 132, 118, 222, 187, 86, 134, 11, 62, 255, 17, 14, 190, 90, 73, 237, 189, 213, 120, 206, 62, 211, 230, 135, 188, 51, 50, 2, 189, 160, 193, 32, 190, 177, 120, 143, 62, 37, 46, 64, 190, 215, 42, 201, 62, 233, 74, 142, 189, 218, 220, 172, 62, 225, 35, 157, 62, 132, 76, 183, 62, 20, 72, 76, 191, 73, 220, 228, 61, 241, 174, 4, 189, 200, 39, 79, 62, 105, 124, 54, 62, 147, 157, 72, 190, 242, 196, 129, 61, 128, 97, 226, 190, 9, 138, 185, 190, 229, 216, 195, 61, 7, 129, 107, 189, 56, 5, 21, 190, 235, 169, 196, 62, 55, 145, 121, 62, 67, 44, 163, 188, 58, 147, 241, 190, 16, 124, 149, 190, 232, 211, 115, 61, 57, 210, 185, 190, 200, 151, 34, 190, 69, 158, 184, 60, 106, 95, 214, 62, 54, 145, 21, 191, 58, 141, 124, 61, 82, 89, 106, 62, 178, 134, 87, 61, 192, 40, 229, 61, 235, 196, 74, 191, 63, 105, 10, 62, 177, 185, 28, 191, 47, 7, 88, 60, 38, 131, 171, 62, 175, 87, 246, 62, 123, 147, 193, 187, 23, 157, 6, 190, 180, 113, 214, 60, 8, 17, 157, 188, 86, 21, 44, 190, 127, 6, 41, 190, 191, 59, 214, 62, 249, 224, 47, 62, 14, 132, 39, 190, 164, 186, 27, 188, 54, 188, 17, 62, 234, 243, 223, 190, 28, 34, 240, 189, 35, 10, 1, 62, 65, 216, 136, 61, 98, 185, 28, 191, 137, 224, 218, 189, 233, 171, 167, 62, 188, 242, 69, 62, 231, 85, 168, 59, 151, 95, 117, 189, 30, 250, 210, 62, 245, 73, 185, 189, 179, 15, 252, 188, 163, 206, 6, 62, 207, 43, 40, 191, 40, 171, 144, 62, 145, 44, 114, 62, 181, 132, 107, 62, 93, 149, 194, 189, 113, 129, 148, 62, 71, 178, 36, 191, 174, 195, 111, 62, 83, 147, 157, 190, 80, 177, 12, 191, 33, 124, 201, 62, 128, 96, 169, 190, 150, 72, 194, 190, 57, 179, 131, 190, 118, 97, 111, 191, 117, 240, 106, 62, 181, 234, 54, 189, 72, 126, 238, 189, 98, 53, 81, 190, 93, 19, 80, 61, 36, 126, 100, 62, 128, 61, 31, 191, 174, 212, 107, 190, 73, 155, 199, 190, 155, 22, 128, 190, 111, 251, 169, 191, 56, 147, 124, 62, 232, 19, 135, 188, 59, 137, 37, 191, 149, 139, 224, 62, 74, 241, 194, 189, 0, 80, 110, 61, 74, 196, 38, 191, 232, 194, 147, 189, 110, 3, 233, 189, 75, 137, 25, 191, 24, 201, 145, 61, 33, 191, 43, 190, 113, 171, 202, 189, 204, 247, 148, 62, 109, 66, 157, 188, 84, 153, 240, 190, 185, 127, 129, 62, 148, 66, 117, 61, 92, 189, 34, 191, 42, 137, 74, 61, 193, 139, 21, 191, 3, 98, 87, 190, 105, 149, 58, 190, 147, 229, 138, 61, 244, 169, 18, 62, 182, 66, 49, 62, 191, 189, 182, 62, 206, 28, 203, 190, 60, 27, 112, 62, 240, 9, 8, 191, 84, 189, 161, 190, 229, 2, 152, 190, 186, 53, 148, 190, 17, 39, 236, 190, 181, 169, 108, 190, 180, 232, 218, 62, 221, 203, 47, 191, 149, 223, 227, 60, 224, 48, 127, 190, 234, 37, 109, 62, 203, 53, 132, 62, 221, 18, 20, 62, 183, 73, 129, 190, 118, 122, 173, 62, 47, 50, 21, 190, 157, 52, 104, 189, 178, 248, 77, 191, 1, 147, 241, 61, 253, 71, 36, 61, 177, 252, 137, 189, 222, 7, 205, 189, 157, 95, 134, 190, 175, 113, 161, 191, 114, 160, 138, 61, 134, 19, 201, 62, 193, 155, 152, 189, 14, 75, 31, 62, 109, 32, 195, 61, 147, 221, 87, 189, 193, 37, 63, 191, 197, 26, 180, 189, 95, 117, 45, 189, 246, 75, 128, 62, 71, 199, 39, 191, 227, 113, 73, 62, 30, 106, 146, 189, 152, 98, 110, 61, 58, 30, 118, 62, 58, 123, 3, 191, 200, 168, 205, 61, 102, 191, 7, 191, 196, 15, 143, 62, 46, 223, 154, 62, 180, 66, 55, 190, 62, 50, 224, 61, 207, 147, 110, 62, 90, 193, 171, 190, 182, 98, 99, 61, 109, 96, 243, 189, 209, 247, 14, 191, 172, 119, 88, 62, 210, 94, 211, 190, 165, 167, 99, 191, 178, 153, 32, 191, 28, 1, 91, 191, 116, 174, 144, 62, 82, 133, 82, 62, 107, 50, 214, 61, 213, 185, 47, 190, 110, 114, 54, 62, 240, 94, 105, 62, 113, 133, 157, 191, 144, 103, 18, 190, 158, 161, 212, 190, 246, 168, 197, 188, 224, 226, 236, 191, 10, 97, 224, 62, 18, 171, 14, 191, 184, 99, 255, 190, 108, 83, 179, 62, 141, 74, 93, 62, 121, 124, 153, 190, 141, 59, 17, 62, 96, 71, 8, 191, 25, 30, 47, 61, 67, 232, 193, 190, 231, 36, 32, 62, 3, 86, 228, 62, 234, 238, 106, 62, 12, 132, 6, 190, 142, 105, 192, 190, 186, 250, 130, 62, 206, 168, 255, 189, 129, 188, 243, 61, 67, 156, 136, 62, 216, 143, 70, 62, 26, 153, 194, 62, 14, 223, 242, 189, 184, 24, 255, 189, 19, 66, 104, 62, 230, 19, 119, 190, 129, 5, 212, 189, 78, 217, 51, 62, 188, 185, 182, 62, 27, 19, 252, 191, 186, 89, 7, 190, 255, 27, 203, 62, 33, 27, 50, 61, 220, 64, 165, 190, 199, 202, 46, 189, 100, 215, 64, 61, 228, 218, 115, 61, 23, 104, 132, 190, 188, 84, 61, 61, 70, 217, 130, 190, 57, 157, 199, 60, 113, 56, 153, 189, 67, 194, 106, 190, 29, 74, 34, 191, 207, 74, 156, 62, 52, 238, 14, 190, 159, 134, 93, 61, 249, 197, 112, 62, 188, 197, 164, 190, 100, 171, 48, 62, 110, 119, 7, 61, 2, 177, 119, 61, 187, 45, 130, 62, 112, 67, 147, 62, 6, 209, 205, 61, 235, 135, 134, 61, 42, 104, 56, 191, 42, 89, 83, 190, 8, 181, 17, 62, 180, 89, 163, 62, 179, 64, 209, 59, 111, 106, 187, 189, 126, 34, 235, 191, 248, 211, 15, 190, 226, 245, 205, 190, 176, 147, 111, 62, 211, 88, 140, 62, 203, 85, 167, 189, 36, 92, 103, 62, 171, 41, 46, 62, 36, 93, 126, 60, 214, 71, 151, 62, 48, 115, 46, 191, 23, 254, 209, 189, 96, 214, 45, 191, 179, 0, 57, 62, 83, 170, 5, 63, 229, 70, 44, 62, 129, 202, 3, 189, 237, 74, 42, 191, 23, 134, 129, 62, 23, 204, 160, 190, 198, 236, 21, 62, 201, 178, 172, 61, 215, 5, 209, 62, 61, 68, 134, 62, 36, 177, 189, 188, 249, 36, 146, 61, 154, 124, 12, 62, 82, 21, 248, 190, 143, 10, 243, 189, 41, 144, 173, 61, 3, 143, 143, 62, 224, 11, 8, 192, 134, 162, 128, 189, 188, 106, 18, 62, 23, 74, 13, 62, 206, 225, 192, 61, 192, 116, 163, 190, 87, 3, 215, 62, 129, 152, 81, 62};
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
                alignas(float) const unsigned char memory[] = {190, 48, 191, 190, 72, 32, 0, 190, 92, 127, 158, 189, 110, 51, 90, 62, 242, 129, 84, 61, 121, 186, 34, 62, 167, 155, 142, 62, 77, 219, 49, 62, 101, 69, 40, 62, 194, 170, 239, 189, 35, 163, 6, 190, 157, 125, 70, 62, 122, 33, 77, 190, 132, 46, 78, 62, 164, 77, 129, 62, 77, 207, 191, 189, 27, 35, 97, 60, 131, 169, 50, 62, 13, 116, 246, 189, 154, 215, 27, 62, 124, 222, 184, 189, 225, 79, 142, 61, 200, 216, 80, 188, 173, 71, 22, 62, 210, 10, 177, 61, 67, 197, 36, 62, 76, 101, 128, 61, 252, 21, 157, 62, 107, 232, 227, 61, 158, 60, 12, 62, 75, 195, 208, 61, 101, 191, 73, 62};
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
                alignas(float) const unsigned char memory[] = {234, 252, 69, 63, 38, 131, 108, 190, 218, 165, 217, 62, 113, 70, 85, 191, 136, 43, 100, 188, 250, 93, 16, 191, 173, 248, 205, 62, 160, 74, 228, 62, 51, 161, 147, 190, 36, 61, 140, 189, 60, 180, 138, 190, 184, 119, 49, 191, 119, 189, 205, 60, 129, 116, 126, 62, 198, 5, 110, 62, 232, 118, 141, 190, 21, 217, 77, 61, 145, 167, 41, 63, 245, 62, 147, 60, 36, 12, 47, 191, 148, 197, 49, 60, 46, 92, 226, 62, 57, 149, 120, 190, 202, 145, 234, 190, 229, 236, 209, 62, 20, 118, 81, 191, 16, 119, 206, 62, 21, 53, 183, 190, 217, 140, 131, 191, 131, 84, 185, 62, 216, 4, 241, 62, 210, 87, 77, 63, 88, 203, 25, 63, 206, 60, 22, 62, 186, 59, 212, 60, 154, 45, 69, 62, 208, 205, 30, 190, 99, 96, 177, 190, 25, 120, 113, 62, 120, 211, 115, 61, 185, 26, 162, 189, 163, 177, 127, 189, 59, 175, 199, 61, 179, 220, 183, 60, 82, 233, 180, 188, 23, 148, 196, 190, 69, 129, 104, 189, 123, 30, 46, 190, 113, 162, 238, 61, 237, 107, 193, 188, 2, 118, 12, 62, 198, 49, 87, 190, 121, 125, 62, 190, 105, 8, 213, 61, 43, 183, 55, 190, 231, 35, 150, 190, 65, 57, 62, 62, 192, 149, 0, 61, 20, 66, 63, 60, 52, 92, 135, 190, 25, 90, 207, 62, 5, 236, 97, 190, 204, 40, 84, 190, 52, 239, 112, 62};
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
                alignas(float) const unsigned char memory[] = {191, 39, 12, 190, 183, 121, 121, 190};
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
    alignas(float) const unsigned char memory[] = {109, 64, 94, 190, 134, 205, 253, 189, 76, 194, 147, 191};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 3, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

// NOTE: This code export assumes that the endianness of the target platform is the same as the endianness of the source platform
#include <rl_tools/containers.h>
namespace rl_tools::checkpoint::example::output {
    static_assert(sizeof(unsigned char) == 1);
    alignas(float) const unsigned char memory[] = {83, 4, 208, 191, 25, 188, 0, 191};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 2, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

namespace rl_tools::checkpoint::meta{
   char name[] = "experiments/2024-05-27_19-39-12/b738cd1_zoo_algorithm_environment/sac_pendulum-v1/0060/steps/000000000014000";
   char commit_hash[] = "b738cd18dcbee2b66aa05c642653771cd0e46c8b";
}