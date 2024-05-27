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
                alignas(float) const unsigned char memory[] = {17, 82, 18, 191, 159, 224, 164, 62, 39, 220, 26, 63, 55, 140, 217, 62, 136, 213, 138, 63, 21, 187, 109, 62, 229, 141, 84, 61, 232, 138, 235, 190, 119, 191, 221, 190, 213, 114, 65, 63, 82, 191, 21, 191, 55, 104, 39, 191, 177, 1, 33, 63, 104, 213, 27, 63, 6, 231, 95, 62, 195, 8, 0, 62, 124, 217, 167, 191, 17, 191, 224, 190, 147, 185, 252, 62, 14, 91, 101, 63, 152, 214, 173, 189, 132, 234, 73, 189, 210, 193, 6, 190, 127, 104, 172, 62, 98, 72, 33, 191, 174, 173, 67, 63, 167, 251, 165, 62, 23, 94, 209, 62, 2, 20, 66, 191, 187, 184, 125, 190, 143, 155, 133, 62, 20, 57, 66, 62, 11, 229, 80, 190, 208, 107, 137, 190, 214, 71, 106, 190, 13, 86, 242, 190, 84, 81, 224, 190, 16, 182, 67, 191, 106, 40, 168, 62, 106, 29, 136, 189, 19, 128, 64, 191, 104, 153, 220, 190, 244, 59, 56, 60, 254, 16, 132, 191, 254, 68, 176, 190, 52, 211, 22, 63, 12, 106, 232, 62, 68, 68, 49, 191, 230, 73, 35, 63, 102, 97, 53, 63, 144, 121, 152, 62, 65, 142, 254, 190, 239, 153, 46, 63, 67, 51, 141, 61, 229, 112, 191, 62, 250, 175, 75, 191, 161, 112, 158, 62, 230, 88, 0, 191, 82, 91, 140, 62, 2, 87, 49, 61, 236, 94, 6, 62, 64, 116, 230, 189, 20, 215, 158, 186, 152, 187, 204, 189, 154, 24, 65, 63, 28, 24, 65, 62, 100, 61, 202, 62, 83, 20, 134, 189, 238, 114, 57, 191, 201, 154, 143, 62, 103, 62, 223, 62, 12, 74, 163, 62, 70, 180, 204, 190, 51, 155, 192, 62, 117, 192, 167, 190, 49, 143, 19, 63, 245, 118, 10, 191, 0, 144, 241, 190, 195, 125, 25, 190, 214, 218, 163, 190, 56, 225, 230, 62, 220, 29, 157, 189, 11, 79, 22, 191, 124, 215, 170, 62, 73, 26, 79, 189, 4, 98, 142, 191, 36, 208, 140, 62, 130, 100, 87, 191, 185, 26, 140, 189, 161, 88, 6, 191, 213, 9, 61, 189, 132, 189, 71, 191, 24, 17, 151, 190, 47, 224, 66, 190, 207, 65, 51, 191, 162, 196, 219, 190};
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
                alignas(float) const unsigned char memory[] = {56, 227, 235, 190, 208, 27, 116, 190, 139, 85, 47, 187, 201, 114, 221, 61, 229, 31, 49, 191, 105, 147, 224, 189, 212, 214, 215, 62, 22, 209, 222, 189, 224, 35, 54, 190, 76, 217, 134, 62, 187, 43, 42, 63, 2, 142, 159, 190, 20, 201, 144, 190, 19, 23, 0, 191, 78, 28, 68, 190, 188, 127, 227, 62, 241, 56, 233, 62, 76, 221, 231, 62, 183, 185, 129, 62, 35, 207, 66, 63, 203, 171, 120, 190, 51, 98, 8, 63, 251, 71, 81, 62, 139, 104, 171, 62, 72, 46, 241, 190, 52, 239, 142, 61, 133, 125, 244, 190, 164, 178, 12, 190, 170, 118, 49, 190, 206, 159, 85, 62, 62, 162, 96, 190, 67, 138, 163, 190};
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
                alignas(float) const unsigned char memory[] = {192, 83, 16, 188, 87, 178, 145, 62, 123, 188, 111, 188, 86, 187, 78, 62, 88, 6, 36, 63, 206, 4, 188, 61, 9, 198, 104, 62, 112, 106, 16, 190, 233, 248, 209, 189, 191, 144, 27, 62, 175, 169, 227, 61, 33, 182, 41, 190, 223, 184, 222, 190, 19, 162, 46, 189, 10, 32, 42, 189, 29, 135, 62, 188, 89, 155, 157, 189, 162, 71, 176, 190, 191, 234, 18, 190, 43, 243, 194, 190, 98, 223, 205, 186, 193, 168, 162, 190, 21, 42, 52, 61, 131, 132, 240, 61, 83, 41, 138, 62, 21, 71, 29, 189, 87, 209, 56, 190, 136, 214, 127, 189, 154, 149, 27, 191, 206, 88, 210, 60, 37, 255, 146, 189, 143, 6, 100, 190, 156, 209, 19, 190, 108, 208, 165, 189, 226, 216, 1, 189, 135, 248, 201, 60, 76, 94, 179, 189, 135, 7, 27, 190, 216, 38, 135, 188, 190, 252, 5, 62, 76, 175, 252, 189, 22, 28, 198, 189, 113, 218, 178, 61, 152, 184, 207, 61, 82, 100, 38, 190, 12, 137, 33, 190, 67, 212, 100, 59, 31, 192, 8, 189, 160, 235, 251, 187, 52, 160, 145, 61, 94, 222, 97, 61, 208, 190, 230, 188, 83, 120, 188, 61, 105, 212, 255, 189, 242, 110, 101, 189, 164, 138, 199, 189, 131, 34, 192, 61, 150, 118, 214, 189, 26, 74, 173, 189, 3, 182, 236, 189, 120, 70, 32, 190, 190, 193, 50, 190, 24, 231, 40, 190, 107, 138, 40, 187, 43, 201, 97, 60, 74, 207, 109, 61, 96, 202, 229, 189, 197, 224, 131, 190, 182, 26, 253, 187, 209, 234, 18, 190, 79, 24, 255, 61, 112, 79, 2, 62, 135, 194, 138, 61, 205, 94, 79, 190, 12, 228, 244, 61, 20, 105, 40, 190, 155, 250, 194, 61, 117, 18, 237, 189, 90, 83, 141, 190, 34, 143, 15, 191, 126, 238, 254, 188, 101, 109, 75, 62, 223, 190, 118, 190, 244, 40, 148, 62, 101, 144, 238, 61, 49, 176, 219, 187, 227, 50, 174, 190, 105, 88, 20, 190, 116, 168, 57, 189, 64, 61, 143, 190, 249, 200, 61, 61, 246, 206, 145, 189, 74, 41, 26, 189, 19, 98, 12, 62, 140, 107, 198, 189, 166, 69, 53, 61, 4, 59, 59, 62, 22, 140, 26, 191, 30, 143, 216, 188, 87, 203, 206, 62, 25, 53, 39, 191, 64, 208, 213, 61, 96, 32, 176, 61, 255, 69, 144, 190, 166, 162, 65, 62, 80, 121, 167, 61, 245, 116, 208, 61, 23, 25, 45, 190, 91, 120, 23, 63, 119, 87, 6, 62, 29, 39, 45, 189, 243, 243, 12, 61, 63, 4, 177, 190, 37, 207, 219, 188, 153, 79, 17, 63, 155, 130, 188, 190, 38, 13, 215, 60, 25, 103, 162, 190, 163, 68, 66, 190, 105, 33, 5, 190, 220, 156, 62, 62, 181, 43, 233, 62, 152, 211, 180, 190, 94, 249, 201, 62, 137, 104, 250, 190, 200, 254, 217, 189, 41, 120, 181, 189, 140, 139, 34, 191, 158, 178, 67, 189, 22, 41, 90, 189, 87, 16, 14, 62, 63, 53, 131, 61, 64, 30, 92, 190, 214, 80, 14, 61, 50, 99, 0, 62, 113, 196, 60, 61, 164, 255, 56, 189, 185, 133, 169, 61, 17, 97, 2, 190, 103, 206, 140, 190, 233, 21, 108, 62, 147, 75, 56, 62, 145, 40, 224, 189, 147, 134, 74, 191, 234, 75, 141, 62, 127, 182, 179, 62, 250, 27, 185, 62, 101, 7, 12, 62, 133, 102, 33, 62, 111, 174, 204, 61, 168, 127, 217, 190, 182, 233, 79, 62, 194, 235, 66, 190, 123, 126, 22, 61, 235, 79, 151, 189, 174, 130, 23, 189, 32, 35, 54, 191, 22, 218, 137, 190, 189, 10, 148, 189, 109, 103, 159, 191, 147, 146, 144, 61, 119, 79, 208, 190, 198, 115, 54, 189, 31, 87, 147, 62, 11, 63, 50, 191, 196, 129, 233, 189, 225, 240, 198, 60, 254, 190, 3, 60, 110, 225, 84, 62, 25, 47, 217, 61, 28, 110, 25, 62, 239, 106, 94, 61, 56, 181, 146, 188, 52, 140, 9, 190, 129, 210, 20, 190, 214, 111, 38, 62, 2, 161, 222, 62, 70, 254, 91, 190, 200, 179, 214, 60, 20, 108, 8, 62, 13, 209, 41, 190, 216, 254, 44, 62, 120, 19, 44, 190, 19, 153, 22, 62, 121, 215, 248, 187, 108, 247, 173, 59, 100, 118, 159, 190, 41, 40, 167, 189, 225, 124, 92, 189, 10, 19, 59, 61, 254, 86, 203, 189, 91, 230, 137, 189, 117, 58, 74, 62, 130, 251, 247, 60, 26, 229, 85, 62, 96, 166, 21, 191, 178, 182, 103, 62, 163, 213, 210, 190, 27, 67, 211, 62, 89, 245, 116, 61, 99, 160, 214, 61, 191, 132, 83, 61, 244, 169, 68, 62, 144, 229, 99, 62, 138, 51, 9, 190, 90, 11, 34, 191, 145, 36, 181, 190, 25, 175, 115, 62, 154, 211, 119, 62, 62, 127, 41, 61, 86, 168, 210, 190, 226, 238, 127, 61, 241, 184, 28, 62, 116, 23, 156, 61, 174, 110, 138, 61, 85, 199, 239, 61, 182, 11, 233, 190, 38, 226, 248, 190, 136, 132, 14, 62, 41, 213, 213, 189, 159, 200, 252, 62, 126, 189, 229, 62, 190, 222, 199, 189, 199, 136, 17, 62, 231, 20, 12, 191, 160, 44, 207, 190, 157, 14, 144, 189, 72, 139, 129, 62, 249, 48, 204, 61, 41, 1, 58, 190, 231, 13, 66, 62, 172, 62, 136, 190, 127, 21, 206, 188, 62, 16, 9, 62, 233, 184, 93, 62, 223, 239, 207, 188, 137, 245, 211, 62, 44, 186, 55, 62, 63, 4, 253, 188, 149, 10, 10, 190, 63, 53, 19, 190, 241, 214, 89, 191, 142, 219, 0, 63, 9, 67, 119, 189, 92, 160, 170, 189, 36, 166, 52, 191, 94, 183, 177, 61, 135, 31, 106, 61, 147, 213, 66, 62, 226, 51, 22, 62, 122, 56, 222, 190, 139, 95, 26, 63, 96, 137, 100, 61, 110, 106, 133, 188, 120, 9, 12, 61, 119, 176, 108, 190, 65, 42, 98, 60, 0, 210, 149, 61, 172, 138, 57, 190, 232, 68, 14, 61, 187, 220, 186, 189, 247, 253, 37, 190, 132, 121, 172, 189, 252, 69, 210, 61, 209, 247, 156, 189, 35, 110, 76, 190, 224, 238, 210, 189, 72, 236, 146, 61, 101, 1, 235, 61, 197, 74, 167, 189, 103, 195, 72, 60, 244, 95, 190, 189, 157, 180, 84, 189, 146, 5, 194, 61, 184, 181, 233, 61, 136, 160, 201, 189, 233, 218, 34, 62, 25, 145, 167, 61, 70, 158, 41, 61, 142, 149, 51, 190, 28, 210, 99, 60, 6, 31, 187, 188, 103, 71, 183, 189, 132, 238, 143, 189, 67, 44, 36, 61, 40, 222, 199, 61, 254, 125, 11, 190, 186, 67, 5, 62, 4, 252, 160, 187, 96, 177, 119, 62, 23, 212, 233, 188, 48, 47, 25, 59, 163, 81, 2, 63, 71, 24, 57, 190, 22, 205, 204, 62, 173, 171, 8, 62, 59, 232, 65, 190, 254, 147, 109, 190, 18, 191, 250, 61, 52, 147, 138, 61, 166, 109, 116, 191, 120, 228, 136, 61, 226, 68, 220, 60, 160, 160, 151, 62, 178, 197, 116, 189, 229, 8, 79, 62, 139, 186, 209, 190, 137, 240, 235, 189, 64, 245, 165, 61, 69, 4, 128, 190, 35, 171, 135, 62, 126, 171, 170, 189, 173, 71, 164, 62, 129, 90, 53, 62, 110, 58, 103, 62, 147, 159, 29, 191, 20, 117, 195, 190, 182, 17, 208, 189, 248, 16, 60, 60, 166, 200, 13, 61, 115, 223, 210, 189, 233, 92, 89, 190, 220, 92, 122, 189, 28, 143, 64, 61, 234, 41, 25, 190, 134, 216, 56, 190, 100, 4, 114, 60, 37, 76, 30, 189, 31, 234, 238, 61, 65, 180, 91, 62, 97, 213, 48, 62, 12, 10, 252, 61, 180, 156, 49, 61, 97, 37, 69, 188, 57, 146, 69, 62, 159, 213, 47, 62, 222, 123, 178, 62, 211, 6, 65, 190, 133, 26, 59, 189, 121, 181, 141, 62, 83, 183, 11, 190, 111, 110, 129, 62, 176, 234, 182, 61, 58, 198, 165, 61, 33, 252, 109, 59, 126, 254, 86, 190, 206, 117, 155, 187, 43, 32, 133, 189, 85, 31, 113, 62, 14, 220, 253, 61, 218, 160, 107, 60, 206, 73, 141, 61, 240, 63, 242, 190, 92, 22, 217, 190, 247, 26, 149, 189, 11, 33, 71, 189, 136, 35, 159, 191, 59, 210, 113, 61, 20, 52, 22, 62, 89, 24, 144, 190, 194, 9, 218, 190, 157, 248, 184, 61, 3, 123, 158, 189, 102, 77, 53, 62, 68, 102, 48, 189, 8, 40, 217, 189, 113, 147, 244, 189, 77, 162, 247, 61, 65, 104, 169, 62, 3, 222, 52, 191, 224, 87, 156, 62, 4, 166, 97, 189, 32, 90, 229, 189, 154, 216, 88, 62, 203, 159, 207, 61, 246, 129, 43, 62, 168, 164, 134, 61, 195, 23, 67, 61, 107, 150, 215, 190, 11, 168, 2, 190, 214, 222, 58, 62, 248, 150, 194, 189, 137, 179, 95, 61, 232, 71, 85, 61, 2, 122, 137, 190, 80, 198, 6, 62, 121, 44, 134, 62, 65, 228, 193, 59, 0, 61, 39, 190, 43, 224, 200, 59, 217, 111, 48, 188, 129, 42, 181, 61, 162, 254, 25, 61, 47, 175, 134, 189, 101, 32, 8, 62, 120, 196, 165, 62, 79, 147, 204, 190, 63, 252, 51, 61, 217, 209, 5, 62, 51, 109, 234, 189, 8, 214, 186, 62, 188, 126, 59, 62, 144, 180, 187, 190, 27, 152, 152, 61, 235, 117, 246, 61, 102, 56, 145, 62, 18, 112, 155, 189, 38, 178, 33, 190, 151, 61, 93, 190, 24, 51, 130, 190, 54, 167, 148, 189, 188, 245, 22, 191, 123, 196, 181, 62, 62, 7, 75, 62, 44, 140, 93, 62, 33, 87, 182, 62, 90, 244, 26, 191, 12, 177, 73, 191, 48, 247, 28, 190, 144, 97, 158, 62, 41, 12, 12, 190, 15, 193, 230, 59, 134, 67, 66, 62, 248, 163, 143, 190, 246, 117, 173, 189, 174, 218, 20, 62, 108, 252, 22, 62, 183, 71, 1, 190, 201, 48, 20, 63, 217, 211, 41, 61, 196, 83, 27, 190, 221, 241, 216, 186, 77, 77, 68, 190, 143, 168, 29, 191, 113, 147, 23, 63, 231, 0, 81, 190, 101, 110, 161, 61, 69, 146, 23, 191, 146, 107, 160, 60, 16, 68, 46, 189, 87, 120, 166, 61, 50, 149, 159, 62, 17, 163, 44, 190, 20, 60, 249, 62, 21, 104, 149, 59, 149, 47, 10, 190, 124, 229, 56, 60, 13, 182, 66, 190, 119, 30, 15, 188, 234, 72, 230, 61, 129, 165, 129, 189, 84, 11, 220, 189, 27, 87, 14, 62, 250, 89, 174, 61, 139, 232, 65, 190, 100, 7, 38, 190, 46, 15, 79, 61, 65, 69, 191, 61, 202, 3, 200, 188, 28, 131, 41, 190, 182, 160, 12, 190, 7, 18, 183, 189, 207, 13, 2, 190, 31, 245, 44, 62, 170, 167, 42, 61, 16, 153, 95, 189, 12, 144, 116, 188, 82, 35, 18, 189, 59, 52, 35, 190, 184, 205, 70, 190, 79, 43, 180, 189, 31, 148, 100, 189, 220, 94, 245, 189, 91, 21, 38, 190, 172, 216, 63, 61, 104, 60, 68, 190, 189, 60, 220, 61, 94, 140, 216, 189, 193, 100, 29, 190, 213, 187, 205, 61, 153, 217, 189, 188, 144, 11, 84, 190, 186, 195, 223, 189, 82, 228, 184, 61, 99, 181, 187, 190, 16, 251, 132, 190, 162, 104, 131, 62, 108, 182, 121, 189, 218, 2, 199, 61, 237, 103, 108, 60, 59, 127, 155, 62, 79, 147, 124, 188, 0, 193, 152, 189, 97, 251, 242, 61, 105, 173, 201, 189, 211, 69, 55, 62, 4, 141, 236, 62, 252, 55, 110, 190, 157, 247, 19, 62, 164, 223, 225, 188, 7, 233, 173, 61, 31, 156, 248, 61, 155, 19, 118, 189, 255, 126, 17, 62, 113, 131, 254, 61, 66, 86, 235, 61, 163, 208, 45, 61, 144, 226, 50, 190, 232, 3, 52, 62, 226, 162, 139, 188, 146, 226, 72, 189, 173, 42, 133, 189, 10, 169, 205, 61, 173, 21, 242, 60, 160, 46, 242, 61, 128, 71, 30, 62, 207, 77, 207, 189, 198, 130, 103, 61, 11, 132, 160, 189, 18, 40, 230, 61, 232, 167, 226, 189, 216, 86, 39, 190, 70, 31, 18, 189, 61, 7, 67, 61, 207, 23, 3, 62, 13, 114, 148, 189, 206, 195, 246, 61, 49, 195, 137, 189, 238, 229, 124, 61, 114, 21, 28, 190, 73, 130, 234, 189, 43, 82, 6, 61, 121, 170, 216, 61, 221, 66, 2, 60, 43, 45, 210, 60, 19, 203, 49, 190, 222, 240, 114, 61, 204, 55, 44, 190, 130, 96, 10, 188, 59, 208, 85, 190, 13, 5, 9, 61, 79, 30, 4, 190, 173, 159, 2, 190, 64, 46, 23, 60, 38, 174, 171, 61, 175, 65, 140, 62, 146, 52, 112, 62, 210, 123, 13, 189, 94, 40, 78, 62, 51, 191, 139, 189, 239, 253, 50, 190, 151, 161, 19, 62, 113, 111, 13, 190, 106, 188, 9, 62, 7, 223, 55, 62, 230, 27, 88, 62, 153, 68, 191, 190, 116, 253, 186, 188, 20, 234, 61, 189, 174, 171, 33, 60, 12, 114, 105, 62, 182, 148, 82, 62, 1, 162, 230, 190, 173, 205, 63, 62, 25, 173, 250, 188, 119, 252, 175, 61, 146, 204, 65, 189, 62, 81, 249, 61, 162, 193, 120, 189, 99, 214, 139, 190, 51, 199, 33, 62, 87, 82, 240, 189, 192, 86, 225, 62, 153, 171, 166, 62, 212, 130, 236, 61, 70, 98, 128, 62, 139, 112, 75, 188, 0, 215, 38, 190, 143, 66, 155, 189, 144, 175, 158, 188, 26, 206, 84, 190, 0, 20, 186, 61, 210, 121, 168, 187, 159, 16, 45, 189, 156, 192, 131, 61, 47, 137, 146, 61, 4, 95, 58, 62, 35, 152, 47, 62, 221, 30, 0, 190, 138, 109, 96, 61, 153, 250, 255, 189, 122, 37, 211, 189, 76, 14, 171, 62, 219, 56, 147, 188, 120, 182, 4, 190, 64, 82, 149, 62, 19, 64, 242, 61, 102, 76, 168, 62, 147, 229, 43, 61, 140, 115, 130, 189, 50, 252, 34, 190, 111, 236, 187, 189, 48, 62, 114, 186, 229, 149, 156, 189, 101, 87, 181, 62, 146, 185, 153, 61, 164, 207, 129, 62, 221, 98, 32, 62, 28, 89, 56, 190, 164, 83, 236, 190, 47, 181, 171, 190, 3, 171, 130, 190, 195, 224, 92, 191, 144, 153, 101, 191, 185, 175, 253, 188, 249, 187, 78, 190, 40, 11, 42, 62, 225, 222, 12, 190, 226, 85, 209, 189, 179, 209, 126, 190, 27, 119, 149, 62, 95, 72, 236, 190, 58, 182, 56, 191, 73, 213, 42, 191, 15, 188, 227, 189, 120, 109, 46, 62, 176, 252, 90, 62, 126, 238, 190, 62, 182, 181, 22, 188, 38, 220, 159, 62, 182, 155, 86, 191, 2, 71, 229, 188, 155, 203, 13, 63, 52, 239, 50, 190, 116, 91, 13, 190, 45, 27, 114, 62, 90, 60, 146, 190, 198, 153, 10, 190, 51, 223, 245, 190, 39, 82, 238, 191, 172, 1, 101, 189, 2, 55, 12, 190, 79, 50, 81, 190, 204, 184, 32, 190, 140, 4, 153, 189, 236, 125, 248, 189, 197, 57, 161, 188, 178, 65, 32, 189, 23, 115, 42, 188, 234, 206, 221, 59, 4, 22, 254, 59, 105, 234, 160, 189, 145, 214, 33, 189, 239, 208, 189, 189, 84, 30, 179, 60, 208, 29, 178, 61, 210, 95, 169, 61, 160, 8, 50, 190, 73, 220, 41, 190, 202, 22, 60, 187, 82, 220, 12, 62, 72, 247, 9, 60, 180, 13, 13, 190, 34, 142, 28, 60, 36, 201, 3, 62, 34, 123, 175, 60, 42, 119, 19, 190, 11, 13, 242, 189, 30, 221, 13, 190, 255, 162, 165, 61, 172, 61, 237, 189, 205, 61, 75, 189, 111, 246, 148, 188, 160, 152, 169, 190, 219, 211, 132, 189, 158, 156, 18, 190, 1, 35, 30, 191, 244, 63, 34, 191, 28, 25, 1, 62, 182, 254, 70, 190, 189, 197, 51, 62, 69, 53, 26, 190, 135, 207, 48, 61, 105, 118, 11, 190, 87, 56, 114, 62, 37, 28, 96, 188, 64, 147, 12, 191, 175, 186, 44, 191, 113, 155, 166, 189, 97, 104, 13, 62, 138, 48, 25, 62, 73, 216, 40, 62, 35, 143, 239, 189, 70, 179, 30, 62, 32, 229, 202, 190, 7, 203, 252, 189, 19, 34, 158, 62, 73, 47, 142, 61, 188, 221, 190, 189, 204, 165, 159, 62, 11, 138, 161, 190, 46, 202, 145, 61, 136, 246, 221, 190, 30, 164, 191, 191, 2, 117, 137, 190, 255, 124, 33, 191, 208, 49, 52, 190, 230, 66, 87, 189, 61, 143, 163, 190, 150, 224, 226, 190, 87, 42, 106, 189, 236, 106, 94, 190, 130, 254, 167, 60, 41, 211, 163, 190, 43, 143, 199, 60, 238, 176, 47, 62, 86, 24, 253, 62, 168, 99, 113, 190, 230, 143, 9, 191, 37, 159, 251, 61, 48, 236, 28, 190, 21, 41, 142, 190, 57, 86, 204, 62, 89, 165, 243, 61, 242, 249, 24, 62, 50, 85, 212, 189, 73, 105, 8, 62, 232, 125, 155, 189, 23, 62, 25, 63, 29, 203, 92, 189, 240, 168, 190, 190, 227, 158, 198, 62, 207, 59, 32, 190, 246, 60, 133, 62, 250, 101, 201, 190, 8, 121, 230, 190, 34, 90, 157, 190, 39, 247, 157, 190, 213, 57, 177, 188, 10, 74, 164, 62, 223, 20, 239, 61, 142, 78, 190, 61, 12, 95, 189, 60, 5, 255, 214, 186, 165, 45, 135, 61, 217, 92, 111, 62, 244, 42, 229, 189, 66, 253, 80, 190, 33, 236, 79, 62, 82, 190, 11, 189, 108, 221, 136, 61, 107, 43, 84, 189, 85, 195, 235, 189, 164, 167, 39, 191, 52, 169, 226, 62, 160, 192, 55, 190, 150, 174, 197, 189, 54, 67, 92, 191, 97, 238, 15, 188, 238, 84, 50, 61, 87, 225, 140, 61, 28, 152, 177, 62, 93, 146, 119, 190, 176, 24, 185, 62, 84, 86, 130, 189, 149, 176, 41, 189, 226, 153, 211, 60, 38, 249, 146, 189, 233, 178, 84, 190, 78, 136, 113, 62, 125, 139, 179, 189, 210, 21, 89, 189, 252, 69, 185, 61, 219, 128, 170, 62, 240, 46, 181, 190, 132, 5, 20, 62, 29, 40, 254, 190, 42, 118, 27, 189, 48, 30, 4, 190, 158, 25, 15, 62, 232, 222, 49, 190, 67, 84, 82, 62, 132, 121, 146, 62, 119, 105, 208, 188, 226, 52, 253, 62, 217, 172, 203, 189, 54, 51, 130, 62, 219, 74, 107, 190, 43, 95, 6, 190, 60, 247, 182, 62, 99, 187, 6, 62, 32, 9, 232, 62, 59, 174, 61, 62, 127, 123, 106, 59, 163, 150, 58, 190, 169, 166, 33, 61, 36, 243, 161, 62, 154, 182, 219, 60, 60, 181, 252, 60, 30, 52, 121, 61, 224, 122, 101, 190, 3, 160, 20, 62, 247, 33, 30, 62, 67, 247, 237, 189, 75, 131, 82, 190, 140, 146, 185, 188, 90, 48, 1, 189, 66, 244, 151, 189, 88, 81, 108, 61, 241, 191, 95, 62, 96, 68, 223, 60, 95, 23, 139, 62, 225, 141, 241, 190, 165, 210, 70, 189, 134, 197, 57, 187, 94, 134, 133, 59, 134, 125, 185, 62, 39, 6, 213, 62, 156, 198, 10, 191, 114, 129, 99, 62, 21, 255, 215, 189, 195, 136, 206, 62, 77, 240, 49, 62, 250, 49, 149, 60, 73, 88, 192, 190, 34, 239, 194, 189, 141, 158, 98, 190, 251, 112, 59, 191, 248, 162, 166, 61, 176, 170, 45, 62, 167, 187, 128, 62, 200, 12, 77, 62, 93, 91, 197, 189, 109, 220, 214, 189, 204, 33, 251, 60, 101, 43, 219, 190, 216, 110, 133, 190, 114, 132, 26, 62, 255, 69, 56, 190, 53, 241, 108, 60, 1, 12, 158, 189, 30, 224, 7, 189, 151, 60, 11, 190, 85, 150, 49, 190, 127, 17, 120, 62, 169, 47, 178, 190, 189, 129, 2, 62, 249, 180, 30, 190, 204, 38, 109, 190, 217, 0, 125, 61, 68, 60, 177, 61, 114, 0, 172, 62, 72, 99, 31, 190, 56, 207, 34, 190, 216, 221, 206, 189, 226, 189, 199, 190, 139, 138, 89, 190, 220, 126, 214, 190, 181, 88, 77, 190, 136, 78, 30, 62, 131, 62, 129, 62, 190, 235, 163, 61, 10, 193, 175, 188, 238, 162, 138, 189, 245, 124, 193, 61, 58, 139, 101, 62, 241, 164, 234, 61, 235, 153, 92, 190, 43, 211, 34, 62, 18, 251, 164, 190, 155, 71, 175, 62, 157, 115, 184, 189, 136, 245, 50, 190, 177, 196, 97, 60, 58, 235, 159, 61, 168, 234, 73, 62, 11, 134, 44, 189, 227, 84, 235, 190, 190, 29, 101, 190, 124, 9, 176, 60, 39, 190, 99, 62, 238, 56, 61, 62, 120, 81, 194, 190, 91, 131, 143, 61, 199, 247, 248, 189, 34, 162, 127, 62, 145, 233, 211, 60, 84, 117, 19, 190, 206, 115, 224, 188, 34, 159, 200, 190, 100, 94, 222, 61, 98, 130, 4, 190, 238, 37, 149, 62, 106, 52, 219, 61, 23, 123, 149, 61, 94, 149, 50, 62, 114, 170, 207, 190, 84, 29, 6, 61, 232, 154, 75, 190, 110, 188, 21, 191, 155, 114, 116, 190, 211, 190, 185, 191, 39, 152, 233, 62, 162, 168, 175, 190, 177, 19, 163, 62, 204, 3, 49, 191, 50, 101, 149, 62, 170, 85, 185, 189, 104, 12, 90, 62, 24, 117, 113, 62, 240, 212, 186, 191, 145, 250, 68, 62, 169, 220, 23, 189, 108, 58, 155, 62, 223, 177, 94, 190, 61, 241, 204, 61, 23, 77, 70, 61, 135, 170, 152, 62, 182, 65, 107, 190, 41, 133, 43, 190, 193, 39, 63, 63, 114, 112, 50, 191, 97, 141, 176, 190, 13, 81, 176, 62, 86, 139, 5, 191, 98, 59, 115, 62, 61, 90, 45, 191, 142, 213, 207, 191, 161, 28, 76, 61, 208, 80, 42, 189, 30, 25, 184, 61, 87, 182, 198, 189, 39, 74, 237, 61, 225, 150, 165, 189, 146, 208, 15, 190, 238, 135, 29, 190, 240, 240, 10, 189, 221, 233, 168, 189, 8, 122, 247, 189, 73, 193, 67, 190, 52, 113, 17, 190, 160, 78, 87, 189, 15, 195, 225, 61, 7, 119, 219, 189, 17, 105, 238, 189, 196, 112, 35, 62, 162, 163, 211, 188, 111, 145, 19, 189, 120, 12, 90, 189, 141, 207, 217, 189, 127, 165, 206, 61, 182, 250, 164, 61, 35, 13, 235, 189, 101, 172, 7, 62, 215, 120, 4, 190, 147, 55, 135, 61, 146, 16, 251, 189, 230, 187, 205, 61, 99, 222, 161, 61, 141, 217, 6, 62, 234, 3, 36, 60, 231, 45, 23, 62, 220, 138, 111, 189, 177, 55, 220, 61, 27, 66, 5, 190, 112, 236, 62, 190, 225, 110, 107, 189, 249, 73, 6, 61, 245, 105, 233, 61, 201, 131, 20, 62, 24, 25, 65, 189, 66, 235, 10, 62, 223, 128, 193, 189, 239, 159, 23, 190, 142, 38, 197, 61, 132, 158, 45, 61, 129, 80, 244, 189, 55, 225, 209, 188, 105, 0, 208, 60, 14, 3, 139, 60, 176, 39, 170, 61, 40, 153, 7, 190, 73, 237, 252, 60, 234, 13, 154, 189, 184, 122, 157, 189, 105, 28, 207, 189, 169, 89, 30, 190, 36, 12, 146, 188, 238, 0, 74, 61, 13, 12, 152, 61, 122, 215, 242, 188, 134, 191, 87, 190, 27, 111, 110, 189, 33, 90, 28, 191, 129, 42, 142, 190, 250, 43, 48, 190, 129, 155, 244, 190, 179, 233, 9, 190, 67, 90, 4, 62, 1, 142, 255, 189, 2, 217, 167, 62, 158, 36, 185, 189, 243, 15, 183, 60, 178, 186, 206, 61, 70, 184, 129, 62, 105, 178, 36, 190, 5, 22, 108, 190, 179, 34, 235, 189, 103, 85, 198, 59, 111, 48, 53, 189, 194, 39, 32, 62, 105, 185, 134, 61, 48, 175, 62, 189, 96, 39, 69, 62, 69, 93, 89, 190, 8, 35, 126, 190, 29, 242, 248, 62, 109, 95, 156, 61, 99, 138, 4, 190, 122, 8, 144, 62, 141, 216, 86, 190, 133, 223, 224, 189, 77, 122, 191, 190, 146, 236, 67, 191};
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
                alignas(float) const unsigned char memory[] = {37, 231, 96, 190, 144, 226, 5, 189, 191, 216, 117, 188, 182, 222, 20, 62, 124, 50, 210, 61, 115, 110, 82, 62, 198, 17, 168, 61, 173, 120, 164, 60, 23, 44, 48, 190, 108, 192, 38, 187, 100, 94, 207, 61, 23, 48, 255, 61, 88, 143, 102, 62, 193, 140, 19, 61, 215, 152, 141, 189, 157, 54, 153, 62, 188, 57, 70, 190, 184, 227, 154, 189, 250, 16, 66, 62, 8, 139, 210, 62, 170, 236, 94, 190, 76, 254, 115, 62, 57, 7, 17, 61, 23, 240, 142, 189, 130, 37, 82, 190, 178, 215, 42, 62, 15, 185, 148, 189, 189, 195, 207, 61, 228, 27, 133, 62, 158, 189, 25, 190, 122, 108, 51, 190, 73, 74, 43, 62};
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
                alignas(float) const unsigned char memory[] = {139, 147, 157, 62, 240, 217, 41, 190, 233, 137, 134, 190, 229, 41, 17, 63, 171, 72, 255, 62, 44, 26, 83, 60, 30, 54, 240, 190, 224, 62, 210, 62, 180, 194, 25, 61, 2, 204, 213, 62, 141, 155, 0, 190, 28, 215, 245, 188, 234, 226, 181, 190, 130, 117, 16, 63, 150, 112, 6, 190, 128, 106, 8, 60, 75, 135, 244, 189, 98, 76, 138, 190, 232, 188, 15, 190, 88, 217, 138, 63, 0, 105, 207, 61, 155, 205, 47, 63, 171, 64, 180, 62, 163, 155, 151, 62, 211, 33, 68, 190, 219, 235, 176, 190, 146, 39, 140, 62, 44, 86, 139, 190, 145, 144, 158, 63, 79, 132, 219, 187, 220, 147, 25, 190, 221, 200, 162, 62, 231, 53, 193, 61, 72, 178, 7, 190, 224, 167, 16, 190, 157, 1, 44, 62, 228, 233, 245, 187, 224, 20, 162, 190, 204, 219, 15, 62, 98, 138, 230, 60, 176, 217, 18, 62, 161, 165, 250, 61, 227, 221, 141, 190, 7, 39, 214, 190, 10, 44, 154, 61, 127, 22, 16, 62, 171, 226, 206, 189, 40, 200, 185, 190, 216, 14, 7, 61, 200, 157, 73, 62, 53, 19, 120, 190, 247, 82, 137, 188, 134, 253, 177, 61, 83, 227, 107, 62, 22, 216, 90, 62, 29, 169, 157, 62, 127, 159, 230, 188, 33, 97, 46, 189, 51, 248, 91, 190, 28, 30, 118, 61, 42, 54, 154, 60, 149, 77, 178, 189, 200, 55, 228, 189, 35, 77, 220, 61};
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
                alignas(float) const unsigned char memory[] = {250, 242, 82, 190, 69, 248, 143, 190};
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
    alignas(float) const unsigned char memory[] = {109, 227, 47, 190, 207, 229, 192, 190, 55, 32, 244, 62};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 3, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

// NOTE: This code export assumes that the endianness of the target platform is the same as the endianness of the source platform
#include <rl_tools/containers.h>
namespace rl_tools::checkpoint::example::output {
    static_assert(sizeof(unsigned char) == 1);
    alignas(float) const unsigned char memory[] = {184, 87, 82, 63, 126, 81, 101, 191};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 2, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

namespace rl_tools::checkpoint::meta{
   char name[] = "experiments/2024-05-27_19-39-12/b738cd1_zoo_algorithm_environment/sac_pendulum-v1/0084/steps/000000000010000";
   char commit_hash[] = "b738cd18dcbee2b66aa05c642653771cd0e46c8b";
}