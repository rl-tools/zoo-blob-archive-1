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
                alignas(float) const unsigned char memory[] = {151, 137, 49, 187, 50, 131, 254, 190, 218, 6, 211, 190, 114, 208, 182, 188, 180, 168, 86, 62, 129, 233, 102, 62, 225, 139, 131, 190, 219, 155, 212, 62, 208, 103, 252, 61, 46, 29, 11, 63, 211, 208, 5, 191, 149, 141, 181, 190, 68, 188, 144, 189, 67, 178, 209, 62, 76, 71, 183, 62, 195, 66, 209, 190, 223, 123, 169, 61, 176, 125, 9, 191, 35, 121, 9, 191, 52, 136, 152, 190, 144, 250, 133, 190, 87, 77, 10, 63, 222, 142, 229, 62, 62, 98, 129, 189, 135, 245, 114, 62, 15, 254, 6, 63, 14, 138, 119, 62, 35, 97, 227, 190, 125, 160, 77, 188, 23, 187, 191, 62, 34, 55, 18, 191, 132, 77, 182, 190, 209, 113, 2, 63, 34, 1, 211, 190, 170, 220, 18, 191, 7, 139, 169, 189, 248, 247, 221, 62, 214, 229, 96, 62, 168, 52, 159, 190, 194, 164, 72, 62, 106, 31, 207, 188, 97, 246, 43, 188, 188, 56, 197, 190, 121, 15, 192, 62, 43, 60, 98, 189, 129, 106, 152, 62, 223, 191, 168, 189, 108, 77, 186, 190, 118, 250, 202, 190, 72, 245, 194, 190, 126, 12, 194, 190, 23, 45, 175, 190, 62, 160, 62, 61, 171, 45, 234, 62, 43, 209, 243, 190, 100, 246, 179, 190, 5, 129, 251, 188, 162, 192, 209, 62, 188, 141, 221, 189, 174, 118, 237, 62, 201, 99, 209, 190, 109, 30, 239, 62, 66, 143, 152, 190, 42, 2, 227, 62, 72, 101, 9, 63, 150, 39, 51, 190, 204, 185, 47, 62, 112, 208, 117, 190, 175, 142, 59, 189, 43, 230, 143, 190, 54, 196, 100, 62, 19, 250, 164, 190, 90, 200, 9, 63, 99, 20, 48, 190, 198, 222, 81, 62, 26, 137, 74, 62, 47, 104, 24, 190, 115, 62, 198, 190, 135, 105, 199, 61, 211, 48, 140, 62, 171, 15, 227, 62, 93, 223, 204, 189, 143, 43, 82, 189, 61, 136, 52, 62, 107, 212, 160, 62, 238, 164, 9, 62, 12, 178, 18, 63, 233, 157, 220, 190, 230, 251, 140, 62, 218, 61, 155, 189, 29, 42, 51, 62, 60, 133, 194, 190, 72, 164, 7, 62, 141, 134, 62, 189, 202, 126, 60, 189, 165, 210, 78, 62};
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
                alignas(float) const unsigned char memory[] = {120, 171, 19, 191, 19, 101, 28, 190, 227, 0, 130, 62, 185, 152, 31, 190, 142, 138, 144, 190, 77, 105, 175, 62, 64, 187, 158, 190, 216, 160, 122, 62, 173, 236, 7, 63, 157, 242, 1, 191, 110, 150, 247, 190, 111, 222, 214, 190, 152, 81, 82, 61, 192, 88, 123, 61, 227, 219, 136, 62, 177, 63, 154, 61, 140, 138, 154, 190, 215, 33, 13, 191, 132, 157, 173, 62, 185, 163, 32, 62, 51, 226, 185, 190, 188, 140, 59, 188, 209, 170, 10, 63, 188, 121, 17, 191, 25, 153, 87, 188, 203, 94, 21, 62, 70, 235, 154, 62, 54, 247, 43, 189, 5, 148, 3, 62, 36, 126, 232, 190, 147, 95, 185, 190, 11, 27, 23, 61};
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
                alignas(float) const unsigned char memory[] = {153, 231, 16, 190, 55, 87, 169, 60, 45, 222, 240, 189, 96, 33, 200, 60, 83, 210, 243, 61, 106, 235, 49, 62, 219, 176, 16, 190, 237, 2, 171, 187, 230, 58, 3, 189, 217, 224, 47, 188, 155, 206, 218, 189, 173, 57, 69, 61, 198, 136, 113, 188, 233, 13, 145, 61, 174, 87, 160, 188, 6, 128, 35, 190, 21, 8, 145, 189, 249, 180, 22, 190, 213, 200, 217, 189, 203, 131, 58, 189, 140, 11, 250, 61, 111, 145, 145, 188, 1, 127, 204, 61, 51, 252, 228, 189, 126, 219, 36, 189, 86, 58, 219, 189, 161, 90, 5, 62, 52, 221, 200, 189, 129, 11, 9, 190, 22, 166, 193, 188, 217, 60, 199, 61, 47, 12, 7, 190, 135, 206, 223, 189, 54, 247, 246, 60, 251, 253, 41, 61, 6, 126, 23, 189, 198, 81, 137, 189, 190, 141, 18, 190, 173, 147, 50, 190, 177, 107, 34, 189, 59, 232, 0, 188, 207, 7, 209, 187, 155, 50, 178, 189, 236, 104, 184, 189, 24, 177, 34, 190, 13, 214, 234, 61, 153, 86, 219, 188, 127, 181, 145, 61, 0, 90, 74, 61, 247, 211, 35, 62, 249, 24, 25, 62, 140, 139, 203, 61, 162, 64, 13, 190, 126, 216, 14, 190, 246, 242, 0, 190, 197, 37, 167, 189, 167, 111, 171, 61, 134, 105, 223, 61, 244, 213, 175, 189, 233, 8, 28, 190, 119, 10, 3, 62, 52, 208, 245, 61, 1, 249, 200, 189, 44, 69, 18, 61, 3, 44, 92, 189, 53, 253, 196, 189, 33, 22, 29, 190, 58, 224, 37, 190, 145, 54, 50, 190, 64, 39, 165, 189, 180, 175, 43, 190, 93, 127, 168, 189, 68, 109, 14, 189, 91, 150, 1, 60, 247, 252, 79, 187, 220, 253, 64, 61, 236, 82, 128, 189, 94, 69, 15, 62, 52, 69, 16, 61, 77, 252, 6, 62, 51, 19, 40, 62, 42, 66, 23, 190, 37, 120, 10, 61, 92, 30, 139, 60, 131, 38, 211, 61, 83, 70, 76, 61, 46, 182, 164, 189, 177, 226, 160, 189, 50, 16, 21, 190, 88, 224, 174, 58, 70, 155, 25, 62, 118, 53, 3, 189, 252, 111, 156, 61, 216, 12, 111, 61, 17, 222, 5, 62, 149, 32, 32, 190, 156, 145, 53, 189, 51, 95, 182, 189, 200, 135, 81, 189, 9, 79, 167, 61, 149, 48, 51, 190, 153, 42, 29, 62, 250, 230, 117, 61, 65, 254, 25, 189, 88, 113, 155, 189, 110, 11, 222, 188, 128, 215, 51, 62, 170, 23, 110, 189, 145, 27, 184, 189, 55, 184, 29, 190, 233, 57, 88, 61, 211, 110, 45, 62, 251, 93, 227, 61, 244, 136, 32, 190, 89, 202, 34, 62, 43, 248, 184, 61, 12, 131, 30, 62, 164, 61, 5, 190, 107, 189, 40, 190, 79, 225, 34, 190, 179, 171, 23, 190, 57, 190, 114, 188, 250, 51, 222, 189, 117, 165, 224, 61, 255, 153, 17, 62, 92, 116, 211, 61, 65, 195, 144, 61, 67, 199, 126, 61, 143, 230, 190, 189, 77, 86, 32, 189, 230, 81, 102, 61, 251, 210, 139, 60, 165, 153, 11, 62, 184, 197, 224, 189, 68, 96, 237, 189, 223, 115, 46, 61, 149, 17, 244, 189, 216, 74, 164, 189, 200, 95, 49, 190, 51, 139, 201, 189, 177, 29, 96, 189, 238, 75, 134, 188, 80, 119, 224, 189, 116, 81, 158, 189, 42, 144, 130, 61, 249, 250, 23, 190, 247, 2, 23, 190, 60, 177, 32, 190, 193, 4, 82, 61, 30, 28, 29, 62, 31, 238, 36, 190, 202, 212, 20, 62, 74, 121, 162, 61, 110, 62, 201, 61, 222, 155, 140, 61, 156, 136, 175, 189, 66, 68, 23, 190, 191, 122, 205, 189, 230, 164, 49, 62, 146, 212, 135, 189, 193, 215, 133, 189, 221, 100, 212, 61, 191, 114, 20, 59, 107, 129, 232, 189, 131, 175, 121, 61, 103, 116, 143, 189, 17, 144, 134, 61, 74, 48, 23, 62, 140, 63, 244, 189, 147, 210, 14, 190, 32, 212, 204, 189, 216, 105, 17, 190, 37, 24, 31, 62, 46, 179, 238, 189, 32, 102, 13, 62, 6, 103, 140, 61, 75, 223, 65, 188, 238, 11, 49, 62, 187, 70, 211, 60, 221, 10, 178, 59, 237, 177, 210, 61, 120, 136, 27, 190, 194, 213, 250, 189, 91, 126, 205, 189, 240, 210, 108, 61, 254, 30, 41, 190, 202, 82, 80, 189, 129, 132, 173, 61, 253, 142, 8, 190, 0, 134, 48, 190, 10, 232, 154, 61, 15, 243, 6, 190, 118, 3, 4, 60, 240, 52, 50, 60, 192, 236, 168, 60, 77, 241, 183, 61, 49, 196, 15, 190, 10, 234, 13, 189, 117, 232, 37, 188, 45, 95, 7, 190, 128, 129, 14, 190, 241, 242, 23, 62, 57, 229, 97, 188, 133, 194, 25, 190, 64, 25, 25, 188, 231, 211, 150, 189, 142, 203, 131, 60, 195, 227, 148, 189, 213, 178, 49, 60, 98, 177, 22, 190, 45, 22, 254, 61, 249, 245, 173, 189, 44, 81, 1, 61, 45, 190, 119, 189, 129, 210, 184, 189, 25, 151, 3, 188, 121, 213, 142, 61, 146, 111, 18, 62, 178, 167, 248, 59, 82, 7, 195, 189, 178, 215, 209, 60, 27, 103, 220, 189, 87, 87, 13, 61, 135, 169, 8, 62, 190, 254, 168, 189, 224, 1, 255, 61, 208, 49, 60, 61, 177, 237, 88, 61, 29, 8, 6, 190, 67, 70, 132, 189, 198, 108, 219, 189, 158, 122, 148, 189, 214, 236, 29, 190, 109, 109, 14, 190, 148, 228, 171, 60, 56, 255, 44, 62, 1, 147, 216, 60, 36, 171, 174, 189, 114, 61, 244, 189, 238, 154, 147, 189, 76, 223, 94, 189, 223, 156, 12, 62, 49, 171, 218, 189, 87, 153, 251, 61, 115, 98, 201, 59, 41, 153, 94, 61, 70, 118, 28, 62, 218, 56, 42, 62, 95, 59, 186, 61, 17, 120, 186, 189, 244, 214, 177, 189, 161, 14, 160, 60, 159, 252, 147, 189, 46, 21, 137, 187, 113, 12, 61, 61, 197, 214, 175, 60, 140, 154, 72, 189, 140, 7, 114, 189, 101, 73, 154, 60, 184, 199, 224, 61, 130, 167, 49, 190, 17, 150, 206, 189, 248, 79, 143, 189, 66, 252, 48, 62, 57, 85, 167, 61, 142, 69, 191, 60, 240, 44, 199, 188, 103, 125, 147, 61, 4, 128, 44, 62, 214, 116, 60, 59, 233, 13, 218, 189, 121, 254, 13, 190, 207, 16, 130, 61, 101, 12, 62, 60, 238, 196, 22, 62, 198, 254, 140, 61, 234, 253, 198, 189, 142, 246, 228, 60, 40, 200, 252, 189, 212, 137, 43, 190, 10, 236, 3, 190, 195, 188, 177, 189, 86, 197, 27, 62, 23, 38, 11, 62, 240, 253, 191, 189, 67, 240, 31, 190, 146, 202, 73, 61, 141, 22, 145, 188, 196, 190, 145, 189, 117, 85, 230, 59, 222, 38, 91, 61, 190, 216, 28, 62, 6, 82, 236, 61, 133, 122, 8, 62, 186, 32, 162, 189, 252, 84, 179, 189, 159, 193, 22, 62, 10, 209, 18, 190, 100, 97, 219, 61, 35, 233, 122, 61, 206, 6, 236, 59, 54, 125, 20, 62, 63, 136, 247, 61, 29, 87, 9, 190, 199, 178, 160, 61, 32, 166, 194, 60, 155, 179, 42, 190, 111, 211, 46, 62, 24, 249, 216, 187, 149, 200, 167, 61, 76, 232, 43, 190, 53, 39, 51, 190, 58, 215, 65, 61, 133, 7, 233, 189, 36, 65, 152, 59, 157, 82, 46, 189, 51, 221, 96, 189, 169, 204, 196, 61, 77, 149, 59, 60, 162, 4, 191, 61, 4, 136, 226, 189, 41, 75, 98, 189, 97, 230, 230, 189, 37, 207, 31, 62, 164, 182, 81, 189, 157, 175, 26, 61, 45, 4, 185, 61, 102, 122, 43, 190, 219, 3, 29, 62, 135, 84, 81, 61, 54, 32, 33, 62, 92, 88, 237, 187, 166, 119, 233, 189, 193, 65, 94, 189, 30, 247, 41, 190, 130, 170, 243, 189, 23, 0, 44, 61, 68, 229, 146, 61, 174, 205, 229, 189, 227, 108, 27, 189, 123, 43, 109, 61, 73, 226, 35, 190, 197, 52, 223, 187, 254, 0, 137, 61, 144, 17, 232, 60, 194, 137, 237, 189, 176, 149, 1, 62, 89, 115, 188, 189, 98, 156, 174, 189, 80, 245, 55, 57, 62, 211, 245, 61, 246, 250, 107, 186, 48, 231, 145, 189, 100, 129, 0, 62, 120, 209, 3, 190, 104, 155, 26, 190, 192, 100, 1, 190, 247, 141, 67, 61, 57, 73, 28, 190, 49, 159, 217, 189, 136, 191, 255, 189, 119, 96, 236, 189, 183, 30, 227, 61, 123, 8, 130, 189, 245, 137, 201, 189, 171, 11, 116, 188, 229, 64, 249, 188, 43, 147, 14, 190, 109, 247, 155, 61, 145, 42, 169, 61, 186, 230, 8, 190, 88, 27, 16, 190, 122, 85, 14, 61, 145, 100, 17, 189, 32, 6, 17, 190, 80, 192, 44, 190, 199, 119, 240, 61, 35, 212, 255, 189, 172, 17, 141, 189, 65, 22, 31, 190, 34, 187, 236, 189, 136, 161, 6, 61, 67, 185, 52, 190, 206, 35, 163, 61, 199, 73, 144, 61, 161, 134, 105, 61, 207, 129, 185, 61, 135, 125, 237, 188, 94, 41, 65, 189, 123, 10, 148, 61, 214, 128, 194, 61, 246, 223, 192, 189, 37, 95, 186, 60, 136, 194, 51, 62, 174, 179, 60, 60, 232, 184, 49, 190, 125, 133, 31, 190, 117, 144, 52, 190, 201, 219, 7, 190, 103, 191, 87, 59, 51, 103, 51, 62, 38, 25, 42, 62, 154, 27, 50, 190, 252, 233, 244, 189, 192, 19, 92, 61, 227, 77, 121, 61, 41, 53, 8, 62, 5, 239, 142, 61, 65, 188, 202, 189, 218, 187, 134, 61, 46, 129, 12, 62, 157, 73, 234, 189, 224, 118, 138, 189, 44, 31, 224, 59, 166, 244, 72, 61, 98, 76, 182, 61, 32, 136, 15, 62, 113, 131, 148, 61, 167, 204, 170, 61, 15, 42, 42, 190, 178, 26, 26, 62, 0, 87, 193, 59, 181, 243, 46, 62, 223, 96, 112, 189, 231, 184, 155, 61, 177, 214, 29, 190, 81, 147, 8, 190, 65, 54, 197, 189, 43, 143, 14, 62, 121, 98, 171, 60, 238, 152, 42, 190, 120, 77, 232, 61, 192, 227, 41, 61, 97, 136, 212, 189, 29, 16, 164, 189, 103, 205, 110, 189, 87, 165, 50, 190, 116, 199, 228, 189, 248, 209, 239, 189, 79, 52, 12, 62, 237, 59, 191, 189, 70, 202, 87, 61, 9, 95, 23, 62, 135, 19, 75, 61, 74, 71, 69, 189, 61, 179, 25, 62, 3, 65, 185, 61, 235, 183, 115, 60, 85, 79, 222, 61, 71, 42, 119, 61, 193, 186, 34, 190, 178, 180, 26, 190, 124, 239, 165, 60, 47, 78, 6, 189, 157, 29, 201, 61, 35, 111, 158, 61, 45, 55, 49, 190, 73, 130, 244, 60, 27, 88, 73, 189, 197, 6, 173, 61, 159, 65, 161, 61, 69, 131, 216, 59, 204, 57, 17, 61, 56, 24, 39, 62, 44, 246, 200, 60, 119, 212, 103, 61, 238, 189, 26, 190, 76, 112, 10, 62, 42, 198, 167, 189, 88, 152, 221, 189, 227, 141, 24, 62, 238, 130, 172, 60, 110, 175, 193, 60, 204, 57, 183, 188, 144, 196, 174, 189, 115, 108, 1, 62, 185, 72, 189, 61, 62, 70, 21, 190, 213, 175, 146, 61, 45, 48, 107, 189, 18, 133, 0, 62, 112, 177, 219, 61, 24, 1, 28, 62, 207, 173, 159, 61, 153, 140, 18, 62, 59, 21, 207, 61, 73, 159, 196, 189, 229, 209, 237, 60, 70, 14, 131, 60, 235, 134, 51, 190, 142, 25, 161, 189, 25, 205, 11, 190, 5, 227, 228, 187, 37, 181, 149, 188, 214, 87, 189, 61, 160, 210, 113, 188, 160, 118, 3, 62, 238, 159, 136, 188, 143, 133, 130, 61, 229, 226, 9, 190, 28, 105, 54, 189, 68, 185, 252, 187, 68, 10, 5, 62, 174, 46, 89, 61, 72, 192, 25, 190, 13, 79, 9, 62, 200, 210, 228, 61, 232, 210, 1, 62, 167, 224, 101, 189, 83, 249, 248, 60, 101, 188, 165, 189, 120, 137, 120, 58, 246, 103, 161, 189, 53, 93, 51, 190, 13, 151, 247, 61, 186, 233, 81, 188, 151, 222, 150, 188, 221, 38, 46, 190, 203, 21, 226, 61, 178, 31, 145, 189, 243, 104, 32, 62, 12, 144, 183, 189, 146, 115, 155, 61, 81, 176, 201, 61, 49, 153, 45, 190, 151, 81, 171, 58, 136, 168, 66, 61, 0, 42, 113, 61, 185, 157, 12, 189, 131, 87, 85, 60, 223, 128, 252, 57, 5, 52, 25, 189, 103, 98, 134, 188, 233, 202, 130, 61, 116, 249, 5, 189, 143, 133, 44, 61, 231, 173, 183, 61, 35, 103, 50, 62, 222, 47, 77, 60, 87, 97, 246, 61, 144, 121, 43, 189, 91, 241, 21, 189, 65, 162, 149, 189, 90, 188, 174, 189, 90, 137, 44, 62, 19, 145, 216, 189, 46, 178, 72, 61, 243, 183, 172, 61, 118, 33, 218, 60, 18, 19, 151, 189, 116, 31, 230, 61, 153, 31, 45, 190, 182, 102, 155, 60, 167, 196, 160, 189, 56, 242, 225, 61, 181, 55, 26, 190, 97, 48, 201, 189, 32, 79, 232, 60, 140, 242, 192, 60, 180, 233, 249, 189, 19, 219, 44, 61, 94, 196, 59, 61, 190, 239, 135, 61, 14, 109, 220, 61, 138, 19, 32, 62, 244, 136, 186, 61, 67, 192, 161, 189, 233, 111, 52, 62, 1, 73, 43, 62, 202, 115, 13, 190, 192, 94, 238, 61, 84, 109, 132, 188, 248, 10, 39, 190, 38, 86, 241, 61, 64, 14, 138, 189, 47, 242, 50, 190, 94, 96, 174, 61, 0, 72, 32, 190, 98, 163, 165, 61, 218, 192, 195, 189, 58, 83, 181, 61, 115, 170, 92, 189, 239, 106, 201, 186, 220, 198, 146, 188, 14, 176, 194, 61, 24, 156, 181, 59, 168, 173, 40, 62, 188, 176, 19, 190, 205, 198, 189, 189, 117, 38, 226, 187, 180, 160, 237, 188, 41, 87, 200, 60, 80, 177, 32, 190, 172, 230, 61, 61, 165, 29, 132, 188, 82, 205, 249, 61, 177, 94, 222, 61, 138, 96, 30, 190, 227, 160, 7, 190, 105, 119, 224, 189, 129, 148, 164, 189, 123, 166, 116, 189, 194, 169, 3, 190, 114, 73, 163, 189, 90, 157, 91, 189, 238, 72, 141, 61, 35, 203, 34, 62, 112, 109, 16, 62, 234, 188, 12, 62, 231, 18, 50, 190, 89, 32, 173, 61, 41, 57, 38, 190, 4, 147, 9, 62, 104, 238, 1, 190, 170, 7, 121, 61, 204, 68, 139, 61, 204, 228, 251, 189, 167, 252, 75, 61, 146, 163, 28, 62, 227, 131, 228, 189, 227, 102, 148, 189, 80, 195, 255, 61, 250, 68, 239, 189, 117, 64, 120, 61, 244, 151, 105, 61, 186, 59, 112, 60, 234, 28, 17, 60, 50, 32, 91, 60, 225, 79, 157, 189, 69, 96, 40, 190, 141, 215, 31, 62, 153, 147, 9, 62, 71, 49, 184, 189, 250, 62, 18, 190, 11, 232, 151, 189, 252, 209, 41, 59, 160, 159, 131, 61, 89, 245, 140, 61, 145, 146, 58, 189, 239, 225, 234, 189, 168, 51, 8, 190, 56, 66, 216, 60, 105, 47, 208, 188, 15, 171, 226, 188, 90, 133, 241, 189, 123, 211, 0, 189, 127, 24, 61, 189, 94, 39, 14, 62, 0, 112, 170, 61, 39, 22, 59, 61, 83, 254, 209, 61, 72, 71, 207, 61, 87, 198, 192, 61, 174, 79, 12, 190, 219, 111, 217, 61, 236, 36, 177, 60, 26, 137, 141, 188, 219, 173, 229, 189, 245, 183, 160, 189, 165, 178, 39, 62, 252, 124, 210, 60, 42, 21, 32, 62, 101, 34, 34, 190, 186, 187, 145, 61, 71, 211, 213, 189, 54, 240, 165, 189, 143, 80, 220, 61, 139, 95, 77, 189, 207, 51, 45, 62, 202, 99, 12, 190, 235, 221, 250, 189, 67, 70, 8, 188, 85, 26, 178, 187, 93, 252, 8, 190, 152, 172, 232, 189, 65, 95, 186, 61, 39, 141, 165, 186, 122, 59, 118, 188, 204, 22, 28, 190, 244, 99, 98, 189, 102, 104, 32, 190, 222, 250, 255, 61, 40, 94, 212, 189, 198, 35, 16, 190, 4, 216, 27, 190, 203, 176, 165, 61, 82, 58, 159, 188, 209, 135, 192, 59, 47, 248, 223, 61, 33, 15, 223, 189, 185, 253, 30, 62, 66, 117, 47, 189, 136, 60, 240, 189, 212, 189, 198, 189, 22, 0, 32, 189, 58, 89, 194, 60, 60, 155, 155, 189, 98, 81, 53, 61, 251, 247, 245, 61, 20, 189, 237, 61, 130, 221, 213, 61, 32, 21, 99, 61, 104, 5, 44, 62, 177, 193, 163, 189, 181, 95, 224, 189, 114, 20, 226, 188, 177, 225, 233, 60, 48, 240, 138, 61, 215, 72, 226, 187, 84, 99, 200, 189, 245, 112, 237, 189, 151, 77, 14, 190, 123, 159, 113, 189, 150, 198, 165, 189, 135, 241, 226, 60, 92, 108, 199, 188, 223, 89, 169, 189, 215, 115, 1, 61, 239, 220, 16, 62, 81, 211, 57, 59, 70, 167, 151, 189, 59, 33, 45, 189, 3, 207, 224, 189, 209, 124, 118, 189, 68, 39, 227, 61, 38, 134, 18, 190, 163, 199, 40, 189, 35, 252, 123, 61, 71, 131, 48, 62, 246, 121, 211, 61, 148, 191, 211, 189, 146, 79, 232, 187, 128, 121, 221, 187, 213, 88, 216, 189, 247, 53, 172, 61, 21, 212, 209, 61, 12, 252, 3, 189, 169, 67, 154, 61, 203, 185, 200, 189, 78, 250, 114, 189, 15, 2, 138, 60, 53, 4, 93, 189, 27, 116, 213, 188, 87, 151, 253, 61, 171, 170, 187, 61, 4, 72, 130, 60, 70, 240, 97, 59, 76, 56, 35, 189, 47, 30, 216, 189, 129, 238, 32, 190, 96, 41, 72, 60, 244, 99, 174, 189, 26, 91, 41, 61, 249, 26, 49, 190, 152, 244, 143, 61, 130, 131, 30, 62, 21, 141, 205, 189, 61, 197, 120, 189, 122, 102, 131, 189, 79, 83, 147, 187, 127, 137, 196, 61, 122, 34, 167, 188, 169, 0, 66, 61, 48, 227, 32, 190, 43, 242, 251, 60, 175, 227, 207, 59, 134, 86, 20, 190, 0, 141, 236, 189, 97, 178, 13, 190, 94, 147, 248, 187, 220, 75, 11, 62, 199, 176, 22, 190, 114, 181, 38, 62, 224, 182, 99, 61, 44, 224, 138, 189, 41, 237, 42, 62, 182, 62, 135, 188, 133, 90, 135, 61, 117, 7, 163, 189, 23, 205, 115, 189, 114, 17, 50, 62, 204, 192, 51, 62, 51, 42, 204, 189, 185, 78, 250, 58, 127, 57, 158, 189, 97, 52, 255, 61, 255, 93, 210, 189, 71, 118, 101, 60, 236, 202, 164, 189, 135, 91, 21, 189, 113, 17, 22, 190, 89, 66, 0, 62, 42, 85, 147, 61, 247, 217, 120, 189, 121, 71, 47, 189, 107, 41, 185, 189, 27, 82, 12, 61, 176, 60, 40, 190, 145, 0, 25, 189, 15, 83, 207, 61, 6, 5, 6, 190, 20, 167, 8, 62, 119, 223, 79, 189, 56, 97, 41, 62, 87, 160, 94, 61, 67, 99, 175, 189, 217, 138, 55, 188, 137, 232, 38, 62, 221, 251, 24, 62, 26, 26, 107, 58, 12, 199, 4, 190, 246, 188, 102, 60, 129, 70, 44, 62, 8, 180, 24, 190, 198, 193, 10, 60, 8, 3, 18, 190, 240, 6, 246, 189, 183, 45, 228, 61, 169, 175, 13, 62, 244, 197, 42, 190, 182, 28, 98, 61, 222, 181, 154, 61, 191, 55, 224, 60, 145, 127, 36, 61, 81, 75, 68, 61, 203, 223, 92, 61, 238, 50, 25, 62, 47, 175, 139, 187, 101, 7, 1, 62, 197, 247, 186, 188, 41, 57, 125, 60, 159, 72, 206, 189, 182, 137, 195, 61, 185, 16, 181, 189, 52, 47, 132, 61, 81, 207, 153, 61, 216, 28, 123, 61, 89, 248, 3, 62, 74, 169, 44, 62, 156, 64, 50, 62, 51, 102, 143, 60, 184, 83, 63, 61, 185, 170, 51, 190, 176, 74, 206, 61, 125, 202, 3, 62, 125, 206, 105, 61, 184, 59, 48, 190, 132, 222, 228, 189, 25, 246, 24, 190, 227, 36, 123, 60, 14, 39, 230, 189, 60, 16, 153, 189, 61, 224, 91, 61, 14, 234, 107, 189, 126, 211, 15, 60, 240, 156, 220, 61, 43, 112, 156, 189, 123, 78, 131, 189, 187, 78, 108, 61, 65, 246, 38, 190, 65, 184, 1, 61, 114, 48, 52, 190, 237, 232, 78, 60, 124, 105, 245, 61, 116, 32, 172, 61, 5, 184, 245, 61, 59, 98, 42, 190, 178, 143, 173, 61, 146, 40, 3, 190, 229, 183, 145, 61, 82, 18, 1, 62, 30, 87, 238, 188, 50, 36, 189, 188, 114, 20, 28, 62, 138, 211, 195, 189, 14, 196, 32, 190, 19, 149, 193, 189, 8, 68, 1, 190, 94, 176, 196, 60, 241, 228, 4, 62, 164, 2, 10, 62, 216, 73, 41, 189, 112, 71, 196, 61, 69, 240, 137, 188, 137, 165, 32, 190, 16, 21, 193, 61, 226, 28, 181, 189, 254, 197, 231, 60, 200, 248, 114, 188, 166, 100, 41, 60, 23, 228, 47, 62, 17, 232, 25, 62, 161, 148, 109, 189, 141, 46, 227, 189, 77, 94, 185, 189, 225, 145, 218, 61, 2, 225, 27, 189, 173, 155, 17, 189, 149, 86, 18, 61, 95, 212, 6, 62, 67, 143, 161, 61, 168, 233, 168, 60, 241, 23, 133, 61, 109, 152, 227, 61, 168, 85, 81, 189, 182, 171, 51, 190, 94, 4, 25, 61, 10, 171, 37, 189, 245, 203, 208, 61, 233, 40, 50, 190, 195, 9, 180, 61, 50, 93, 21, 188, 225, 214, 6, 190, 232, 112, 233, 61, 106, 178, 37, 190, 102, 220, 133, 189, 102, 158, 56, 189, 206, 52, 254, 61, 73, 222, 39, 190, 109, 22, 156, 59, 0, 103, 31, 62, 78, 138, 49, 188, 203, 25, 52, 189, 160, 40, 155, 189, 222, 215, 46, 190, 100, 135, 155, 61, 175, 163, 217, 60, 7, 62, 172, 188, 99, 198, 46, 62, 78, 75, 11, 190, 149, 236, 46, 190, 63, 189, 37, 62, 74, 6, 88, 61, 24, 165, 73, 61, 125, 137, 181, 61, 31, 175, 168, 189, 25, 24, 27, 190, 47, 23, 52, 60, 6, 117, 44, 190, 231, 247, 169, 187, 249, 8, 25, 62, 38, 94, 9, 62, 174, 193, 156, 60, 118, 63, 1, 190, 129, 91, 21, 189, 107, 178, 21, 190, 77, 252, 21, 190, 112, 246, 135, 61, 143, 105, 0, 189, 56, 225, 237, 189, 150, 237, 26, 62, 146, 18, 188, 61, 234, 235, 40, 62, 160, 160, 42, 189, 154, 180, 194, 189, 215, 193, 26, 190, 110, 130, 236, 189, 29, 95, 169, 61, 229, 135, 11, 62, 55, 163, 42, 62, 213, 230, 232, 189, 222, 133, 6, 188, 174, 145, 225, 189, 182, 136, 129, 61, 191, 37, 222, 189, 171, 164, 16, 190, 75, 193, 141, 61, 53, 110, 3, 62, 125, 65, 26, 62, 226, 132, 149, 60, 217, 217, 0, 190, 116, 80, 234, 61, 67, 209, 136, 189, 251, 20, 179, 61, 228, 14, 159, 189, 185, 33, 189, 58, 115, 159, 18, 190, 173, 203, 213, 61, 38, 108, 38, 190, 77, 99, 66, 61, 224, 50, 35, 60, 147, 86, 48, 190, 63, 203, 134, 189, 77, 58, 156, 61, 46, 113, 215, 61, 175, 94, 175, 189, 179, 226, 10, 62, 115, 10, 48, 190, 62, 241, 9, 190, 128, 203, 196, 61, 238, 73, 212, 188, 239, 237, 29, 61, 113, 143, 40, 190, 167, 149, 34, 189, 49, 219, 217, 60, 247, 86, 143, 61, 144, 219, 81, 61, 191, 153, 28, 190, 235, 248, 12, 61, 206, 161, 13, 61, 188, 208, 177, 189, 56, 195, 9, 190, 10, 91, 10, 190, 125, 35, 252, 60, 58, 189, 68, 61, 109, 23, 229, 61, 12, 92, 23, 190, 88, 133, 17, 62, 157, 160, 35, 190, 35, 165, 31, 189, 47, 19, 138, 61, 167, 177, 170, 188, 112, 179, 45, 62, 101, 208, 176, 189, 94, 164, 72, 189, 239, 54, 12, 62, 36, 199, 153, 61, 204, 160, 28, 62, 187, 76, 131, 61, 45, 120, 233, 189, 233, 189, 145, 189, 135, 132, 13, 61, 126, 74, 26, 62, 71, 250, 228, 189};
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
                alignas(float) const unsigned char memory[] = {96, 205, 136, 189, 144, 163, 248, 189, 208, 240, 22, 190, 134, 106, 8, 62, 232, 138, 4, 189, 92, 178, 101, 61, 130, 150, 153, 61, 125, 64, 217, 61, 210, 56, 8, 62, 25, 63, 196, 60, 129, 241, 107, 189, 183, 33, 150, 61, 214, 242, 188, 189, 17, 251, 30, 62, 241, 29, 70, 61, 239, 150, 35, 62, 166, 246, 202, 60, 249, 251, 19, 61, 80, 104, 181, 189, 167, 24, 153, 189, 224, 5, 45, 186, 98, 126, 14, 190, 56, 11, 157, 188, 8, 39, 37, 62, 240, 170, 199, 61, 104, 172, 241, 61, 71, 173, 126, 189, 103, 36, 20, 62, 4, 145, 1, 62, 141, 20, 51, 62, 166, 236, 36, 190, 40, 31, 19, 189};
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
                alignas(float) const unsigned char memory[] = {63, 174, 202, 61, 85, 8, 37, 190, 254, 146, 247, 189, 94, 149, 18, 62, 135, 207, 50, 189, 56, 217, 174, 189, 199, 143, 47, 62, 59, 98, 68, 61, 94, 165, 138, 61, 75, 248, 141, 61, 61, 122, 253, 61, 185, 141, 9, 190, 81, 247, 230, 61, 189, 20, 9, 61, 181, 99, 188, 188, 45, 10, 149, 189, 74, 236, 35, 190, 113, 54, 113, 61, 9, 4, 41, 62, 112, 206, 184, 61, 22, 124, 250, 189, 208, 232, 93, 189, 8, 107, 30, 190, 42, 197, 200, 189, 222, 205, 143, 189, 6, 110, 214, 60, 124, 238, 227, 61, 157, 18, 247, 189, 160, 59, 129, 60, 109, 239, 214, 188, 77, 232, 179, 189, 96, 246, 170, 60, 22, 84, 4, 62, 112, 40, 36, 61, 65, 202, 133, 61, 172, 170, 46, 62, 186, 139, 20, 190, 70, 30, 19, 60, 147, 152, 79, 189, 142, 193, 230, 189, 122, 17, 159, 189, 172, 241, 166, 189, 56, 86, 100, 188, 232, 40, 50, 62, 183, 128, 180, 189, 56, 141, 173, 61, 218, 115, 21, 62, 230, 202, 197, 60, 14, 252, 165, 189, 10, 178, 166, 61, 38, 96, 195, 61, 15, 86, 208, 187, 104, 201, 172, 189, 149, 108, 247, 61, 57, 249, 34, 61, 167, 193, 30, 62, 113, 96, 171, 187, 226, 88, 9, 62, 45, 126, 15, 61, 17, 70, 253, 61, 21, 107, 30, 189, 22, 8, 27, 62, 175, 12, 189, 60, 46, 154, 81, 60};
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
                alignas(float) const unsigned char memory[] = {70, 122, 175, 60, 181, 4, 227, 60};
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
    alignas(float) const unsigned char memory[] = {144, 213, 96, 190, 191, 99, 185, 62, 14, 36, 195, 191};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 3, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

// NOTE: This code export assumes that the endianness of the target platform is the same as the endianness of the source platform
#include <rl_tools/containers.h>
namespace rl_tools::checkpoint::example::output {
    static_assert(sizeof(unsigned char) == 1);
    alignas(float) const unsigned char memory[] = {128, 116, 142, 59, 113, 198, 52, 62};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 2, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

namespace rl_tools::checkpoint::meta{
   char name[] = "experiments/2024-05-27_19-39-12/b738cd1_zoo_algorithm_environment/sac_pendulum-v1/0056/steps/000000000000000";
   char commit_hash[] = "b738cd18dcbee2b66aa05c642653771cd0e46c8b";
}