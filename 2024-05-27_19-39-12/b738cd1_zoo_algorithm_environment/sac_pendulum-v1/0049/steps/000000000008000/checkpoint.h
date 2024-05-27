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
                alignas(float) const unsigned char memory[] = {142, 218, 99, 63, 241, 223, 128, 62, 108, 81, 198, 62, 203, 254, 71, 63, 201, 235, 254, 60, 120, 226, 19, 63, 122, 67, 203, 62, 213, 82, 16, 63, 182, 85, 13, 63, 100, 181, 206, 62, 205, 196, 240, 62, 73, 185, 204, 189, 136, 26, 110, 190, 142, 54, 95, 191, 129, 39, 174, 189, 8, 144, 82, 190, 131, 16, 193, 189, 39, 223, 188, 60, 245, 146, 153, 62, 68, 241, 34, 63, 208, 120, 171, 60, 104, 119, 9, 191, 2, 100, 145, 191, 147, 167, 181, 190, 0, 248, 143, 190, 1, 124, 17, 63, 84, 153, 151, 190, 54, 52, 217, 62, 175, 235, 11, 191, 88, 55, 150, 190, 227, 162, 191, 190, 199, 255, 133, 62, 215, 148, 18, 63, 203, 70, 52, 62, 100, 227, 17, 190, 135, 2, 160, 190, 202, 250, 13, 63, 125, 88, 212, 187, 107, 161, 255, 62, 164, 81, 9, 63, 205, 25, 39, 63, 150, 159, 230, 190, 74, 89, 83, 63, 59, 130, 239, 190, 115, 80, 19, 191, 245, 137, 40, 63, 39, 186, 214, 62, 14, 241, 202, 62, 115, 197, 119, 189, 229, 132, 6, 191, 248, 90, 63, 62, 49, 28, 88, 63, 17, 255, 86, 191, 130, 183, 172, 190, 20, 68, 9, 63, 21, 10, 23, 191, 87, 100, 123, 190, 30, 222, 160, 190, 146, 54, 114, 191, 37, 61, 14, 62, 248, 97, 135, 190, 11, 195, 222, 61, 253, 189, 160, 190, 219, 176, 31, 190, 123, 119, 76, 188, 153, 85, 16, 191, 98, 80, 32, 190, 192, 117, 162, 189, 244, 31, 139, 190, 54, 89, 8, 190, 238, 164, 249, 190, 5, 220, 23, 191, 104, 46, 82, 191, 130, 250, 247, 189, 15, 128, 206, 61, 27, 202, 234, 189, 76, 4, 152, 190, 241, 245, 36, 63, 11, 250, 19, 62, 239, 25, 90, 191, 115, 43, 108, 62, 165, 29, 18, 63, 23, 221, 170, 62, 217, 222, 145, 190, 90, 25, 242, 62, 39, 113, 102, 191, 235, 216, 210, 190, 247, 77, 157, 62, 36, 240, 175, 62, 26, 106, 36, 188, 104, 106, 162, 61, 228, 154, 185, 190, 92, 27, 14, 63, 120, 171, 4, 63, 0, 224, 58, 63, 220, 20, 15, 63};
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
                alignas(float) const unsigned char memory[] = {249, 61, 129, 191, 223, 247, 48, 62, 204, 153, 1, 63, 85, 59, 48, 62, 37, 36, 190, 62, 192, 175, 36, 63, 228, 237, 216, 190, 61, 248, 201, 61, 98, 177, 206, 190, 25, 63, 209, 62, 252, 71, 109, 190, 34, 240, 185, 62, 115, 27, 137, 62, 28, 162, 143, 62, 189, 253, 223, 190, 123, 124, 67, 191, 30, 26, 43, 189, 228, 131, 32, 191, 63, 243, 145, 62, 254, 184, 111, 190, 247, 244, 7, 190, 26, 236, 157, 189, 14, 15, 7, 63, 28, 76, 152, 188, 197, 120, 41, 189, 172, 180, 0, 63, 85, 31, 149, 62, 123, 136, 162, 62, 104, 177, 8, 62, 153, 3, 11, 63, 186, 107, 30, 62, 22, 191, 101, 190};
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
                alignas(float) const unsigned char memory[] = {176, 4, 52, 62, 206, 156, 11, 189, 216, 81, 236, 60, 219, 195, 169, 61, 155, 110, 99, 190, 197, 234, 253, 189, 66, 6, 144, 188, 34, 179, 39, 62, 94, 78, 51, 189, 199, 12, 163, 189, 194, 88, 8, 190, 245, 194, 195, 188, 62, 254, 224, 61, 189, 32, 60, 62, 88, 215, 5, 189, 236, 123, 193, 189, 160, 147, 112, 189, 245, 19, 20, 190, 113, 9, 252, 189, 228, 115, 8, 189, 148, 118, 248, 188, 104, 195, 215, 189, 31, 40, 70, 190, 110, 115, 155, 189, 127, 86, 21, 62, 224, 239, 15, 62, 36, 76, 164, 189, 159, 158, 63, 61, 173, 143, 181, 60, 120, 60, 13, 190, 221, 111, 44, 190, 175, 2, 119, 188, 76, 169, 163, 189, 240, 78, 80, 61, 32, 121, 31, 191, 70, 114, 178, 190, 182, 207, 157, 62, 138, 223, 139, 189, 76, 252, 20, 188, 122, 203, 26, 62, 253, 105, 63, 191, 62, 125, 135, 191, 30, 72, 49, 191, 94, 160, 110, 191, 26, 201, 163, 62, 226, 102, 95, 190, 84, 164, 136, 190, 155, 239, 155, 61, 145, 81, 18, 63, 158, 215, 96, 190, 182, 28, 51, 191, 132, 220, 20, 63, 1, 201, 240, 189, 164, 115, 174, 189, 235, 41, 23, 61, 226, 64, 122, 190, 28, 65, 135, 62, 165, 65, 59, 59, 108, 139, 236, 187, 176, 35, 206, 190, 205, 212, 242, 190, 139, 224, 141, 190, 150, 103, 19, 191, 175, 252, 168, 62, 157, 135, 66, 190, 189, 221, 3, 190, 8, 166, 75, 61, 138, 15, 13, 190, 58, 193, 1, 191, 148, 254, 170, 61, 14, 52, 129, 190, 248, 242, 84, 57, 14, 126, 9, 63, 246, 200, 242, 190, 48, 157, 79, 61, 234, 114, 224, 60, 109, 10, 207, 189, 47, 111, 227, 190, 125, 216, 132, 61, 93, 119, 33, 62, 65, 139, 118, 190, 35, 134, 50, 190, 191, 12, 195, 189, 80, 44, 21, 191, 25, 113, 31, 190, 236, 247, 154, 191, 72, 146, 19, 62, 22, 172, 206, 191, 237, 56, 172, 62, 69, 157, 210, 188, 76, 133, 41, 190, 139, 119, 66, 191, 135, 20, 174, 190, 18, 85, 7, 62, 61, 226, 36, 189, 250, 239, 42, 189, 26, 114, 203, 62, 176, 124, 153, 62, 91, 227, 188, 189, 242, 194, 30, 62, 198, 210, 75, 190, 247, 225, 38, 62, 239, 21, 5, 62, 68, 184, 51, 189, 217, 29, 15, 190, 241, 19, 188, 189, 80, 144, 216, 189, 196, 222, 81, 61, 137, 195, 84, 60, 214, 134, 180, 62, 100, 184, 171, 190, 134, 71, 204, 61, 106, 72, 106, 189, 194, 47, 60, 191, 174, 150, 37, 62, 134, 93, 81, 62, 146, 49, 17, 62, 12, 81, 14, 62, 157, 189, 27, 189, 22, 87, 80, 190, 203, 185, 12, 190, 87, 164, 226, 189, 179, 194, 28, 62, 218, 62, 135, 62, 7, 190, 161, 190, 180, 150, 229, 188, 214, 175, 76, 190, 155, 90, 103, 62, 175, 53, 76, 190, 117, 112, 222, 61, 181, 194, 42, 190, 242, 64, 80, 189, 201, 184, 6, 62, 134, 41, 28, 62, 200, 246, 31, 190, 36, 71, 219, 190, 228, 240, 196, 190, 234, 248, 92, 62, 41, 174, 50, 190, 172, 211, 161, 61, 48, 26, 44, 60, 62, 254, 20, 188, 51, 34, 149, 189, 101, 84, 183, 188, 56, 138, 163, 190, 227, 198, 192, 189, 185, 120, 20, 62, 134, 79, 29, 190, 158, 31, 182, 190, 111, 2, 187, 190, 86, 92, 70, 189, 174, 148, 19, 191, 52, 95, 254, 61, 153, 173, 189, 61, 90, 185, 162, 62, 126, 41, 135, 189, 174, 25, 127, 62, 117, 142, 25, 62, 215, 227, 35, 62, 23, 196, 105, 190, 213, 60, 82, 189, 40, 49, 180, 190, 71, 180, 61, 61, 107, 108, 225, 61, 162, 8, 130, 190, 18, 106, 103, 189, 169, 241, 244, 189, 250, 119, 25, 190, 45, 190, 165, 61, 202, 168, 216, 61, 100, 152, 216, 188, 234, 53, 48, 62, 93, 208, 134, 190, 161, 113, 211, 61, 211, 172, 166, 62, 236, 98, 128, 61, 75, 65, 73, 191, 151, 29, 65, 62, 191, 211, 250, 61, 71, 103, 129, 191, 187, 37, 160, 189, 107, 66, 62, 190, 125, 5, 30, 190, 156, 55, 98, 190, 105, 89, 65, 190, 32, 211, 149, 190, 13, 138, 143, 59, 94, 86, 23, 62, 239, 51, 59, 62, 214, 96, 1, 62, 181, 168, 4, 188, 249, 188, 159, 190, 40, 57, 45, 62, 150, 217, 183, 62, 80, 199, 44, 62, 235, 53, 225, 62, 12, 18, 108, 190, 104, 74, 145, 61, 254, 182, 229, 61, 107, 149, 186, 189, 87, 233, 37, 62, 146, 202, 37, 62, 100, 154, 29, 188, 118, 232, 88, 61, 102, 153, 129, 62, 60, 88, 52, 62, 12, 10, 185, 189, 134, 61, 53, 62, 10, 4, 222, 189, 81, 141, 85, 191, 6, 219, 23, 190, 41, 68, 108, 189, 65, 23, 39, 190, 41, 96, 26, 190, 76, 213, 50, 190, 226, 139, 132, 61, 176, 19, 154, 190, 231, 140, 192, 189, 65, 119, 100, 190, 85, 182, 160, 61, 124, 170, 122, 190, 108, 66, 67, 62, 29, 118, 151, 190, 244, 254, 40, 61, 166, 65, 234, 61, 160, 87, 169, 62, 180, 16, 153, 188, 165, 169, 43, 189, 41, 216, 195, 189, 71, 247, 117, 62, 174, 120, 87, 61, 117, 114, 12, 62, 120, 142, 164, 190, 91, 225, 231, 189, 221, 96, 203, 190, 253, 15, 198, 61, 26, 36, 178, 62, 204, 215, 133, 61, 94, 62, 252, 190, 188, 154, 134, 189, 191, 69, 212, 61, 245, 57, 39, 191, 160, 202, 210, 189, 184, 253, 12, 62, 229, 248, 43, 62, 4, 118, 43, 62, 126, 72, 178, 62, 99, 27, 147, 61, 221, 134, 144, 189, 118, 138, 138, 190, 64, 167, 150, 189, 5, 46, 160, 62, 239, 234, 139, 190, 73, 134, 102, 61, 104, 19, 214, 190, 235, 200, 11, 62, 185, 193, 98, 190, 178, 4, 166, 189, 197, 132, 109, 62, 161, 134, 17, 188, 53, 187, 198, 189, 115, 212, 13, 62, 231, 103, 67, 189, 153, 18, 13, 190, 219, 166, 55, 188, 241, 146, 148, 62, 178, 194, 67, 59, 114, 2, 133, 62, 74, 209, 25, 190, 127, 61, 5, 62, 53, 235, 26, 62, 84, 248, 100, 189, 108, 60, 252, 189, 9, 35, 38, 62, 186, 26, 133, 61, 189, 152, 208, 190, 94, 135, 25, 62, 26, 137, 42, 190, 28, 247, 72, 62, 61, 61, 141, 188, 135, 197, 185, 189, 176, 221, 9, 189, 37, 215, 182, 62, 101, 16, 231, 61, 197, 132, 126, 62, 61, 231, 135, 62, 102, 190, 176, 62, 150, 152, 223, 189, 154, 223, 59, 62, 187, 118, 134, 61, 233, 158, 186, 60, 5, 154, 0, 62, 68, 51, 241, 190, 31, 188, 244, 190, 248, 97, 188, 62, 198, 236, 72, 190, 253, 204, 207, 189, 137, 155, 222, 189, 49, 250, 100, 61, 73, 29, 122, 60, 87, 125, 244, 61, 200, 173, 234, 188, 43, 253, 201, 62, 185, 52, 185, 62, 24, 192, 152, 61, 36, 111, 26, 63, 76, 187, 236, 61, 37, 72, 62, 191, 164, 151, 45, 59, 220, 164, 146, 60, 47, 197, 183, 189, 67, 164, 232, 61, 19, 114, 34, 191, 62, 200, 17, 190, 34, 89, 75, 190, 109, 217, 86, 61, 17, 135, 96, 62, 48, 187, 169, 60, 61, 205, 86, 61, 191, 81, 142, 62, 38, 242, 132, 61, 236, 189, 56, 62, 66, 179, 131, 61, 139, 33, 244, 188, 137, 13, 136, 190, 69, 149, 5, 61, 42, 238, 85, 62, 31, 183, 28, 61, 13, 215, 88, 190, 107, 166, 20, 61, 245, 156, 129, 190, 233, 21, 101, 60, 154, 40, 81, 61, 38, 208, 128, 61, 249, 70, 38, 190, 229, 165, 109, 62, 197, 203, 28, 59, 65, 161, 96, 191, 76, 55, 219, 189, 202, 139, 57, 62, 62, 96, 134, 62, 248, 252, 250, 187, 91, 102, 14, 62, 52, 81, 220, 60, 67, 226, 248, 190, 13, 159, 76, 189, 75, 188, 210, 189, 79, 23, 2, 62, 87, 227, 14, 190, 139, 240, 108, 62, 159, 242, 87, 190, 159, 164, 128, 62, 255, 48, 236, 188, 173, 231, 135, 190, 55, 99, 42, 190, 74, 30, 20, 62, 25, 250, 7, 191, 17, 175, 203, 190, 74, 78, 110, 190, 197, 31, 120, 60, 136, 164, 127, 62, 85, 202, 168, 188, 75, 183, 33, 190, 107, 240, 91, 61, 47, 190, 117, 189, 173, 40, 46, 189, 163, 237, 16, 190, 196, 5, 210, 61, 206, 158, 73, 189, 233, 87, 47, 189, 224, 237, 2, 190, 107, 172, 125, 188, 61, 238, 201, 60, 165, 123, 156, 189, 26, 75, 151, 60, 238, 79, 87, 62, 227, 91, 1, 190, 75, 251, 180, 190, 40, 242, 109, 60, 246, 45, 151, 61, 20, 210, 103, 190, 187, 93, 222, 60, 47, 248, 105, 59, 62, 189, 65, 190, 185, 105, 211, 62, 124, 221, 178, 61, 84, 140, 227, 189, 245, 249, 223, 190, 73, 4, 84, 62, 61, 53, 21, 190, 100, 105, 164, 61, 60, 29, 173, 62, 63, 48, 247, 61, 39, 92, 95, 190, 173, 166, 129, 189, 209, 66, 119, 189, 212, 179, 91, 59, 137, 95, 68, 189, 180, 11, 136, 190, 217, 213, 167, 62, 176, 241, 128, 61, 48, 225, 216, 190, 52, 76, 21, 190, 103, 150, 106, 62, 251, 86, 57, 62, 242, 88, 100, 62, 111, 61, 65, 62, 215, 238, 7, 62, 136, 109, 133, 60, 3, 140, 117, 61, 194, 132, 107, 62, 181, 178, 95, 190, 196, 19, 243, 61, 135, 96, 209, 190, 85, 245, 140, 190, 150, 140, 134, 62, 68, 248, 140, 189, 252, 183, 112, 190, 43, 35, 77, 191, 59, 24, 172, 190, 131, 160, 123, 62, 55, 90, 31, 62, 99, 55, 68, 61, 229, 252, 112, 62, 191, 189, 178, 190, 195, 125, 246, 190, 103, 147, 23, 191, 230, 252, 222, 190, 172, 178, 197, 60, 87, 160, 158, 60, 44, 31, 135, 190, 43, 33, 171, 59, 35, 101, 15, 63, 77, 29, 31, 61, 133, 112, 147, 190, 46, 35, 5, 63, 235, 202, 90, 62, 21, 188, 152, 189, 207, 88, 39, 189, 178, 134, 109, 190, 217, 15, 159, 62, 180, 111, 239, 60, 58, 181, 233, 190, 47, 52, 7, 190, 214, 124, 59, 190, 39, 128, 39, 190, 159, 136, 42, 191, 183, 252, 181, 188, 99, 159, 53, 189, 198, 179, 50, 61, 179, 249, 197, 187, 244, 187, 150, 189, 163, 17, 157, 61, 227, 197, 128, 189, 0, 217, 35, 188, 217, 73, 15, 190, 106, 89, 255, 60, 32, 175, 168, 189, 128, 78, 27, 190, 36, 10, 112, 61, 247, 131, 84, 189, 146, 173, 21, 190, 252, 103, 40, 62, 71, 63, 118, 188, 236, 175, 43, 190, 228, 215, 196, 189, 195, 224, 145, 188, 247, 108, 47, 62, 150, 29, 128, 189, 51, 168, 167, 61, 31, 211, 20, 190, 94, 139, 227, 60, 190, 113, 23, 62, 35, 90, 41, 190, 167, 207, 60, 61, 26, 181, 220, 61, 114, 64, 17, 188, 66, 134, 31, 190, 22, 7, 3, 62, 17, 109, 198, 189, 113, 194, 43, 190, 247, 40, 6, 62, 134, 206, 79, 61, 116, 159, 132, 61, 164, 127, 11, 190, 109, 61, 18, 62, 182, 214, 204, 61, 74, 182, 195, 61, 156, 61, 62, 190, 148, 64, 236, 189, 120, 0, 143, 190, 66, 66, 194, 189, 16, 182, 239, 61, 249, 248, 99, 61, 39, 208, 255, 189, 102, 196, 117, 189, 124, 19, 198, 61, 114, 65, 92, 190, 145, 173, 14, 61, 207, 53, 70, 190, 113, 42, 4, 62, 157, 242, 193, 61, 30, 178, 159, 189, 201, 159, 31, 188, 31, 167, 82, 62, 54, 248, 5, 190, 142, 70, 57, 190, 201, 70, 44, 62, 207, 103, 77, 190, 157, 116, 10, 61, 252, 96, 37, 190, 225, 115, 217, 61, 147, 96, 76, 189, 101, 240, 187, 189, 55, 216, 234, 189, 245, 165, 165, 61, 127, 20, 178, 62, 107, 96, 149, 62, 28, 147, 237, 62, 64, 21, 190, 61, 129, 178, 104, 190, 114, 165, 45, 188, 94, 140, 83, 191, 190, 141, 159, 189, 146, 192, 56, 190, 230, 210, 190, 188, 164, 44, 203, 190, 236, 68, 70, 188, 185, 72, 84, 61, 159, 203, 13, 191, 190, 199, 99, 189, 84, 83, 147, 62, 53, 210, 64, 61, 44, 69, 37, 62, 211, 69, 137, 62, 97, 65, 38, 61, 99, 145, 56, 190, 152, 179, 19, 191, 129, 60, 171, 190, 185, 88, 242, 188, 35, 101, 66, 188, 232, 241, 135, 62, 127, 139, 165, 191, 255, 23, 130, 189, 20, 53, 217, 61, 88, 212, 163, 189, 197, 181, 212, 61, 178, 174, 184, 61, 170, 81, 36, 61, 180, 66, 233, 61, 85, 14, 92, 62, 174, 214, 114, 60, 213, 204, 128, 60, 169, 165, 216, 189, 206, 49, 187, 189, 29, 85, 164, 189, 126, 50, 33, 62, 235, 176, 242, 61, 113, 221, 64, 190, 245, 6, 157, 189, 169, 135, 174, 61, 155, 166, 23, 191, 103, 149, 23, 189, 174, 7, 90, 62, 168, 89, 75, 62, 231, 57, 109, 189, 148, 163, 206, 189, 14, 2, 212, 61, 202, 17, 25, 189, 163, 68, 141, 189, 160, 87, 74, 190, 28, 218, 127, 61, 51, 244, 66, 61, 174, 168, 142, 61, 109, 133, 52, 60, 93, 219, 143, 61, 57, 132, 80, 62, 69, 38, 161, 61, 123, 77, 7, 61, 67, 201, 2, 62, 188, 0, 19, 189, 191, 251, 50, 61, 239, 215, 124, 62, 182, 112, 153, 62, 156, 241, 197, 59, 172, 91, 11, 190, 120, 214, 192, 190, 26, 147, 239, 189, 133, 161, 110, 61, 253, 236, 157, 62, 205, 78, 22, 190, 101, 253, 66, 62, 146, 250, 18, 62, 233, 99, 81, 191, 166, 245, 97, 190, 191, 53, 242, 188, 224, 211, 56, 190, 145, 69, 55, 61, 59, 75, 119, 61, 81, 109, 166, 189, 115, 217, 213, 189, 42, 192, 248, 189, 95, 26, 122, 189, 211, 208, 59, 61, 255, 98, 35, 188, 65, 46, 255, 61, 191, 28, 87, 59, 58, 44, 112, 62, 205, 61, 161, 190, 65, 214, 118, 190, 145, 3, 62, 62, 200, 75, 53, 191, 227, 120, 64, 62, 253, 167, 10, 62, 217, 255, 64, 190, 51, 29, 147, 61, 217, 121, 151, 62, 15, 29, 252, 60, 251, 8, 87, 62, 223, 32, 129, 62, 174, 148, 43, 61, 108, 21, 198, 190, 123, 238, 33, 62, 128, 254, 167, 189, 119, 228, 147, 190, 92, 176, 163, 61, 165, 121, 62, 62, 200, 44, 147, 190, 196, 135, 90, 191, 58, 80, 60, 191, 27, 109, 219, 188, 255, 47, 25, 191, 87, 62, 140, 189, 199, 157, 124, 62, 47, 3, 148, 62, 173, 12, 225, 190, 85, 30, 231, 61, 87, 110, 8, 189, 235, 91, 125, 187, 115, 210, 83, 190, 203, 75, 254, 190, 197, 86, 87, 190, 27, 197, 79, 189, 210, 227, 231, 189, 122, 196, 100, 62, 85, 67, 146, 62, 148, 33, 18, 191, 200, 185, 116, 190, 241, 122, 52, 190, 205, 185, 118, 62, 226, 39, 69, 62, 99, 41, 48, 59, 82, 231, 146, 190, 148, 17, 159, 190, 138, 183, 151, 62, 166, 92, 196, 190, 197, 147, 13, 190, 239, 170, 75, 62, 26, 181, 75, 62, 5, 164, 105, 190, 76, 241, 184, 190, 164, 126, 245, 190, 236, 72, 24, 62, 1, 204, 102, 190, 46, 112, 13, 190, 74, 18, 130, 62, 114, 4, 163, 62, 83, 129, 80, 190, 231, 243, 152, 62, 13, 81, 89, 62, 232, 135, 172, 62, 216, 193, 156, 190, 80, 186, 35, 189, 114, 186, 134, 189, 138, 6, 189, 189, 204, 166, 136, 190, 105, 226, 33, 189, 56, 207, 30, 62, 86, 169, 102, 190, 171, 55, 193, 190, 7, 231, 18, 63, 161, 167, 81, 61, 191, 67, 237, 61, 139, 63, 10, 62, 49, 76, 172, 61, 62, 80, 241, 190, 56, 6, 161, 61, 199, 20, 217, 60, 13, 63, 213, 190, 164, 137, 94, 62, 9, 163, 140, 188, 123, 246, 185, 190, 121, 68, 11, 191, 171, 29, 4, 191, 24, 143, 11, 190, 13, 95, 68, 191, 169, 251, 124, 61, 187, 25, 16, 62, 228, 44, 66, 189, 239, 158, 15, 191, 130, 112, 191, 61, 57, 38, 85, 61, 218, 220, 66, 62, 70, 210, 181, 60, 6, 172, 29, 61, 55, 222, 235, 61, 110, 48, 15, 190, 101, 64, 164, 188, 35, 128, 65, 62, 89, 8, 57, 190, 108, 202, 171, 60, 186, 221, 49, 190, 33, 63, 206, 189, 148, 149, 86, 187, 5, 198, 82, 190, 167, 196, 17, 61, 27, 63, 143, 189, 53, 1, 12, 62, 45, 91, 254, 189, 148, 200, 38, 61, 69, 87, 43, 62, 163, 117, 75, 59, 45, 90, 242, 61, 249, 98, 24, 62, 168, 172, 206, 61, 79, 203, 62, 190, 183, 37, 139, 189, 120, 39, 58, 61, 162, 145, 106, 189, 255, 76, 37, 190, 17, 20, 50, 190, 188, 138, 224, 188, 205, 37, 171, 187, 80, 223, 233, 187, 98, 189, 161, 61, 203, 76, 241, 61, 56, 151, 155, 61, 63, 227, 134, 62, 241, 198, 174, 61, 202, 48, 139, 62, 54, 37, 174, 190, 241, 0, 22, 62, 123, 139, 63, 62, 188, 183, 219, 190, 35, 94, 181, 189, 183, 24, 134, 62, 18, 238, 14, 61, 157, 1, 73, 62, 190, 63, 165, 61, 59, 35, 88, 62, 97, 47, 133, 59, 39, 208, 131, 187, 105, 34, 230, 188, 15, 74, 36, 191, 60, 38, 54, 62, 187, 19, 228, 61, 48, 220, 141, 60, 130, 158, 41, 190, 15, 191, 223, 189, 211, 244, 138, 190, 151, 24, 99, 190, 38, 240, 232, 61, 155, 245, 152, 188, 152, 66, 113, 61, 17, 115, 167, 189, 131, 201, 71, 62, 184, 243, 240, 189, 204, 180, 178, 61, 98, 155, 58, 62, 136, 94, 238, 61, 50, 250, 140, 61, 207, 219, 5, 61, 246, 31, 15, 190, 174, 191, 159, 189, 71, 227, 193, 61, 135, 236, 49, 190, 37, 152, 201, 188, 172, 3, 200, 188, 162, 223, 90, 190, 38, 34, 49, 189, 191, 101, 29, 62, 193, 3, 126, 190, 133, 242, 172, 59, 201, 111, 143, 189, 118, 106, 1, 60, 195, 96, 23, 189, 210, 200, 122, 189, 216, 75, 77, 190, 199, 170, 15, 190, 96, 161, 143, 60, 15, 142, 158, 190, 45, 116, 17, 62, 41, 93, 225, 187, 231, 245, 68, 190, 159, 246, 145, 61, 3, 116, 201, 188, 147, 184, 128, 189, 73, 134, 190, 189, 199, 83, 33, 190, 250, 196, 249, 188, 173, 189, 203, 189, 163, 17, 226, 189, 176, 29, 241, 190, 125, 242, 144, 61, 131, 243, 56, 189, 49, 31, 135, 61, 105, 68, 236, 61, 75, 174, 57, 189, 174, 12, 243, 189, 7, 202, 61, 189, 132, 105, 61, 191, 61, 148, 205, 61, 182, 199, 132, 190, 171, 70, 25, 62, 210, 182, 135, 190, 150, 142, 67, 62, 23, 35, 206, 189, 243, 144, 229, 190, 64, 222, 176, 60, 106, 170, 181, 189, 81, 70, 138, 61, 62, 18, 18, 62, 202, 145, 12, 62, 105, 100, 33, 62, 0, 2, 160, 62, 179, 241, 219, 189, 19, 87, 20, 191, 55, 208, 57, 61, 93, 219, 79, 190, 71, 36, 172, 189, 183, 180, 48, 191, 191, 7, 56, 189, 155, 25, 154, 190, 100, 213, 57, 190, 219, 126, 37, 62, 81, 181, 158, 190, 122, 58, 148, 62, 86, 247, 9, 62, 156, 227, 173, 190, 59, 206, 138, 190, 222, 212, 148, 62, 189, 169, 177, 62, 190, 188, 3, 62, 227, 113, 82, 60, 193, 120, 159, 190, 161, 42, 12, 191, 33, 76, 168, 62, 124, 52, 182, 190, 185, 210, 74, 190, 101, 142, 81, 62, 171, 150, 137, 62, 172, 93, 193, 190, 187, 82, 103, 191, 193, 54, 136, 191, 229, 91, 174, 186, 63, 76, 245, 190, 231, 83, 49, 62, 170, 38, 237, 61, 122, 200, 155, 62, 162, 142, 183, 190, 227, 52, 106, 62, 152, 39, 243, 188, 46, 153, 133, 62, 177, 109, 137, 190, 242, 206, 120, 61, 121, 64, 132, 189, 91, 9, 131, 190, 78, 15, 2, 61, 238, 148, 65, 61, 232, 255, 187, 190, 198, 81, 228, 60, 88, 109, 147, 60, 196, 179, 74, 190, 154, 156, 120, 62, 124, 44, 46, 190, 99, 37, 1, 62, 9, 179, 51, 188, 234, 27, 242, 60, 141, 231, 22, 62, 254, 15, 80, 61, 167, 225, 5, 63, 117, 225, 82, 62, 96, 224, 15, 61, 109, 205, 207, 188, 169, 19, 40, 190, 146, 8, 102, 189, 22, 151, 28, 190, 173, 141, 86, 190, 150, 32, 183, 190, 87, 97, 118, 188, 35, 116, 168, 62, 224, 168, 35, 190, 244, 46, 215, 61, 183, 84, 204, 61, 86, 231, 98, 59, 247, 121, 16, 191, 219, 33, 6, 62, 238, 165, 88, 189, 122, 57, 8, 190, 163, 209, 227, 59, 221, 89, 60, 190, 103, 234, 35, 190, 82, 51, 118, 61, 147, 34, 239, 61, 216, 119, 227, 188, 199, 142, 211, 189, 133, 118, 19, 190, 241, 170, 195, 61, 54, 226, 178, 189, 230, 64, 146, 189, 233, 80, 15, 62, 156, 98, 251, 189, 251, 165, 158, 188, 50, 17, 1, 62, 196, 29, 136, 189, 212, 71, 216, 60, 141, 182, 251, 59, 195, 55, 9, 190, 32, 175, 254, 189, 131, 98, 29, 189, 92, 93, 11, 189, 192, 254, 30, 190, 220, 161, 186, 188, 229, 208, 14, 190, 206, 170, 177, 189, 203, 134, 46, 189, 197, 129, 35, 190, 19, 214, 46, 62, 92, 166, 176, 60, 41, 12, 54, 189, 86, 221, 5, 61, 148, 40, 0, 62, 192, 78, 44, 62, 109, 32, 233, 61, 255, 100, 204, 189, 38, 11, 92, 61, 195, 97, 140, 190, 200, 255, 185, 189, 189, 77, 52, 61, 79, 48, 50, 190, 68, 28, 117, 62, 223, 227, 92, 62, 125, 14, 28, 188, 246, 118, 24, 62, 161, 58, 48, 60, 125, 227, 177, 190, 185, 221, 111, 189, 250, 153, 249, 61, 206, 255, 31, 62, 200, 254, 137, 61, 24, 239, 93, 62, 245, 234, 23, 189, 41, 231, 192, 188, 43, 168, 186, 189, 237, 211, 5, 189, 181, 236, 183, 61, 84, 218, 136, 61, 64, 147, 240, 61, 34, 86, 188, 60, 54, 69, 173, 59, 139, 98, 99, 190, 39, 227, 42, 190, 102, 17, 195, 61, 46, 79, 47, 62, 131, 193, 143, 61, 50, 191, 20, 61, 202, 132, 181, 190, 55, 101, 224, 190, 139, 167, 209, 190, 36, 193, 183, 60, 158, 73, 4, 62, 107, 63, 22, 62, 2, 137, 188, 61, 104, 163, 179, 189, 173, 144, 47, 62, 161, 231, 60, 61, 105, 202, 241, 189, 152, 107, 62, 62, 182, 199, 173, 62, 136, 248, 148, 190, 113, 237, 167, 190, 215, 62, 137, 190, 154, 166, 2, 62, 7, 107, 250, 190, 96, 214, 37, 59, 254, 192, 20, 62, 126, 54, 33, 62, 241, 174, 58, 62, 218, 207, 5, 62, 20, 96, 5, 62, 145, 50, 23, 62, 213, 161, 167, 189, 151, 140, 43, 190, 10, 98, 46, 190, 46, 148, 107, 61, 45, 221, 24, 190, 147, 66, 238, 190, 254, 28, 48, 60, 184, 40, 5, 191, 233, 253, 69, 190, 190, 113, 27, 62, 142, 196, 104, 189, 177, 80, 156, 62, 97, 219, 5, 62, 119, 45, 133, 190, 85, 233, 249, 59, 166, 107, 71, 62, 87, 70, 21, 190, 200, 101, 157, 190, 145, 14, 14, 63, 192, 106, 234, 187, 197, 25, 251, 190, 159, 123, 241, 60, 166, 163, 157, 60, 205, 172, 112, 189, 228, 132, 29, 189, 193, 255, 40, 62, 120, 108, 89, 62, 133, 147, 95, 62, 51, 82, 129, 189, 255, 241, 174, 61, 8, 130, 128, 61, 39, 119, 69, 62, 176, 37, 39, 190};
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
                alignas(float) const unsigned char memory[] = {147, 20, 94, 190, 67, 229, 54, 62, 95, 248, 28, 62, 25, 190, 124, 189, 39, 85, 9, 62, 26, 7, 32, 61, 65, 247, 125, 61, 88, 119, 59, 61, 218, 205, 137, 62, 199, 226, 189, 190, 138, 244, 0, 61, 22, 18, 131, 190, 5, 168, 88, 190, 2, 61, 56, 62, 51, 85, 224, 189, 251, 181, 138, 62, 35, 158, 173, 62, 4, 150, 137, 62, 77, 190, 161, 187, 231, 209, 78, 62, 22, 193, 18, 62, 117, 167, 115, 62, 56, 150, 165, 188, 91, 46, 196, 189, 171, 15, 18, 190, 97, 210, 239, 60, 138, 176, 203, 62, 48, 30, 33, 189, 89, 228, 243, 61, 52, 216, 157, 62, 165, 96, 2, 62, 5, 0, 209, 188};
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
                alignas(float) const unsigned char memory[] = {1, 212, 7, 189, 51, 61, 143, 191, 152, 82, 84, 63, 170, 136, 230, 190, 196, 167, 37, 62, 121, 226, 141, 62, 86, 58, 246, 190, 251, 214, 28, 191, 205, 87, 59, 62, 86, 58, 43, 63, 180, 1, 215, 190, 184, 9, 80, 62, 134, 238, 8, 191, 59, 78, 61, 191, 21, 69, 48, 190, 174, 42, 228, 189, 20, 227, 81, 191, 114, 203, 15, 190, 219, 89, 146, 190, 72, 206, 243, 62, 67, 42, 23, 63, 47, 216, 86, 62, 18, 23, 3, 61, 60, 168, 40, 190, 75, 119, 234, 61, 219, 73, 118, 189, 224, 121, 33, 63, 36, 45, 13, 61, 48, 182, 146, 61, 113, 108, 220, 188, 0, 8, 54, 62, 160, 225, 168, 62, 65, 36, 24, 62, 29, 37, 230, 61, 219, 243, 222, 61, 89, 103, 243, 188, 187, 157, 236, 190, 190, 62, 233, 189, 101, 144, 88, 61, 97, 180, 230, 61, 97, 50, 136, 190, 155, 42, 124, 62, 137, 238, 123, 62, 252, 110, 49, 62, 95, 252, 205, 60, 211, 3, 241, 189, 52, 153, 2, 61, 15, 173, 126, 189, 46, 17, 97, 61, 25, 209, 220, 189, 229, 98, 178, 62, 96, 184, 138, 61, 38, 176, 176, 61, 88, 160, 95, 61, 55, 216, 35, 190, 243, 162, 154, 190, 59, 81, 92, 62, 148, 72, 182, 190, 40, 177, 173, 61, 117, 185, 162, 62, 67, 64, 139, 189, 32, 12, 80, 190, 238, 182, 136, 190, 219, 60, 47, 62};
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
                alignas(float) const unsigned char memory[] = {155, 137, 12, 190, 100, 240, 183, 189};
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
    alignas(float) const unsigned char memory[] = {17, 146, 6, 191, 42, 174, 40, 191, 218, 54, 39, 191};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 3, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

// NOTE: This code export assumes that the endianness of the target platform is the same as the endianness of the source platform
#include <rl_tools/containers.h>
namespace rl_tools::checkpoint::example::output {
    static_assert(sizeof(unsigned char) == 1);
    alignas(float) const unsigned char memory[] = {190, 206, 117, 191, 172, 217, 138, 190};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 2, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

namespace rl_tools::checkpoint::meta{
   char name[] = "experiments/2024-05-27_19-39-12/b738cd1_zoo_algorithm_environment/sac_pendulum-v1/0049/steps/000000000008000";
   char commit_hash[] = "b738cd18dcbee2b66aa05c642653771cd0e46c8b";
}