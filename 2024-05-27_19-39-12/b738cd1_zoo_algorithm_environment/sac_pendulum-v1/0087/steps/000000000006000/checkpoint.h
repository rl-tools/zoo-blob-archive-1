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
                alignas(float) const unsigned char memory[] = {79, 62, 138, 61, 144, 218, 253, 190, 71, 246, 90, 190, 147, 80, 207, 60, 241, 95, 176, 190, 189, 226, 227, 62, 114, 107, 155, 190, 206, 185, 229, 62, 74, 215, 159, 61, 125, 42, 30, 191, 127, 77, 83, 63, 50, 199, 173, 62, 237, 226, 39, 63, 45, 43, 96, 63, 160, 186, 3, 63, 0, 158, 51, 63, 72, 194, 36, 63, 161, 12, 216, 62, 30, 244, 38, 62, 30, 40, 66, 191, 116, 60, 109, 62, 57, 146, 35, 63, 92, 45, 113, 191, 125, 251, 210, 190, 148, 70, 242, 62, 85, 177, 23, 63, 197, 181, 255, 62, 205, 109, 48, 63, 54, 239, 13, 191, 62, 61, 102, 190, 12, 13, 170, 61, 212, 231, 2, 62, 200, 162, 157, 190, 228, 160, 182, 62, 35, 175, 183, 62, 99, 191, 242, 62, 144, 24, 121, 190, 223, 216, 55, 191, 144, 247, 1, 191, 57, 189, 157, 190, 15, 92, 129, 62, 244, 1, 98, 61, 191, 111, 119, 63, 5, 19, 135, 191, 222, 194, 187, 189, 35, 111, 92, 62, 156, 49, 3, 191, 132, 116, 244, 190, 237, 3, 138, 62, 111, 154, 7, 63, 158, 206, 32, 63, 183, 190, 23, 190, 201, 109, 51, 191, 185, 232, 86, 63, 3, 146, 183, 62, 167, 113, 14, 62, 135, 180, 3, 63, 172, 225, 27, 62, 104, 146, 177, 190, 20, 239, 80, 63, 150, 12, 77, 191, 35, 117, 163, 190, 14, 118, 184, 61, 151, 73, 249, 62, 34, 151, 32, 63, 189, 114, 204, 62, 186, 138, 109, 191, 4, 117, 181, 62, 116, 45, 25, 62, 227, 240, 170, 189, 42, 207, 105, 191, 86, 194, 185, 61, 204, 57, 14, 191, 46, 17, 35, 62, 59, 244, 215, 189, 75, 94, 32, 191, 5, 183, 77, 62, 18, 194, 37, 63, 40, 25, 220, 190, 134, 125, 49, 63, 141, 99, 10, 63, 78, 143, 0, 60, 248, 55, 55, 191, 21, 190, 232, 62, 247, 208, 84, 190, 98, 161, 241, 62, 204, 139, 32, 191, 202, 199, 109, 63, 74, 70, 238, 62, 253, 50, 18, 62, 140, 157, 182, 190, 104, 55, 115, 190, 135, 217, 62, 188, 123, 179, 230, 61, 84, 28, 125, 189, 157, 163, 244, 190};
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
                alignas(float) const unsigned char memory[] = {181, 126, 34, 191, 187, 5, 187, 62, 94, 160, 15, 63, 172, 196, 128, 190, 202, 44, 208, 190, 229, 87, 98, 62, 67, 77, 248, 188, 135, 54, 95, 189, 58, 243, 21, 191, 143, 119, 157, 61, 58, 211, 193, 62, 7, 4, 39, 190, 32, 133, 183, 62, 110, 178, 36, 63, 112, 6, 188, 62, 144, 208, 83, 190, 221, 218, 9, 63, 70, 80, 174, 190, 88, 236, 81, 190, 223, 61, 83, 62, 57, 181, 19, 63, 144, 119, 152, 190, 76, 124, 245, 62, 199, 190, 30, 63, 149, 173, 194, 190, 213, 99, 166, 190, 207, 203, 168, 189, 9, 38, 255, 190, 121, 69, 164, 62, 131, 252, 76, 190, 24, 80, 27, 191, 187, 97, 5, 190};
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
                alignas(float) const unsigned char memory[] = {163, 171, 96, 61, 216, 102, 38, 190, 145, 101, 239, 59, 129, 137, 253, 190, 132, 247, 134, 62, 189, 30, 130, 62, 207, 12, 244, 189, 37, 252, 127, 61, 3, 96, 150, 61, 56, 67, 40, 189, 0, 36, 89, 61, 192, 252, 94, 62, 126, 111, 19, 189, 82, 40, 103, 62, 188, 0, 40, 190, 205, 228, 106, 60, 58, 236, 14, 62, 100, 43, 106, 190, 251, 252, 9, 62, 172, 23, 43, 190, 142, 46, 79, 62, 232, 181, 33, 62, 28, 18, 251, 188, 7, 129, 193, 187, 220, 6, 247, 189, 209, 18, 27, 191, 141, 253, 139, 190, 230, 111, 118, 190, 85, 76, 67, 61, 114, 97, 205, 62, 63, 189, 102, 61, 230, 199, 207, 61, 67, 140, 219, 60, 235, 46, 38, 62, 183, 214, 89, 61, 67, 109, 184, 60, 35, 153, 208, 61, 195, 185, 161, 188, 219, 43, 116, 61, 23, 244, 206, 189, 101, 36, 156, 61, 35, 134, 16, 62, 218, 182, 247, 189, 185, 16, 6, 189, 19, 182, 184, 189, 45, 97, 219, 189, 101, 104, 9, 190, 92, 214, 96, 62, 54, 228, 73, 62, 163, 155, 89, 189, 97, 247, 17, 62, 189, 138, 31, 62, 133, 238, 23, 190, 249, 151, 93, 62, 200, 123, 116, 60, 16, 214, 181, 61, 107, 24, 190, 189, 241, 104, 152, 62, 108, 232, 199, 189, 79, 71, 62, 62, 129, 119, 159, 61, 93, 192, 204, 62, 112, 186, 210, 61, 199, 101, 147, 62, 196, 109, 88, 62, 108, 78, 167, 62, 53, 144, 87, 187, 239, 234, 166, 62, 188, 218, 255, 190, 175, 197, 167, 189, 153, 90, 201, 62, 154, 118, 148, 62, 6, 200, 58, 190, 178, 55, 173, 62, 222, 23, 227, 189, 237, 175, 202, 190, 181, 189, 155, 190, 228, 80, 50, 190, 217, 108, 168, 62, 125, 247, 102, 61, 221, 104, 2, 60, 65, 60, 69, 62, 165, 68, 202, 190, 183, 56, 115, 62, 188, 166, 196, 62, 226, 96, 190, 190, 81, 95, 140, 61, 132, 235, 54, 62, 214, 40, 238, 61, 55, 183, 168, 62, 16, 143, 47, 61, 136, 127, 58, 190, 2, 86, 42, 190, 193, 234, 126, 190, 208, 194, 52, 190, 229, 32, 141, 61, 157, 37, 176, 60, 209, 46, 109, 61, 34, 232, 218, 189, 200, 36, 129, 189, 15, 8, 5, 62, 172, 160, 181, 189, 137, 23, 61, 61, 148, 226, 29, 190, 63, 1, 41, 62, 139, 249, 180, 189, 41, 247, 205, 61, 107, 8, 152, 189, 138, 149, 209, 60, 106, 207, 141, 61, 70, 82, 1, 190, 149, 168, 47, 62, 251, 137, 4, 190, 246, 155, 36, 61, 95, 224, 24, 62, 243, 50, 199, 59, 166, 82, 197, 187, 15, 27, 189, 189, 199, 15, 34, 190, 210, 3, 25, 190, 138, 29, 33, 190, 34, 9, 51, 190, 113, 75, 21, 190, 146, 8, 188, 61, 20, 123, 31, 190, 100, 255, 12, 62, 199, 49, 30, 190, 165, 251, 23, 61, 127, 180, 150, 61, 119, 249, 28, 190, 232, 157, 135, 190, 234, 218, 114, 190, 238, 239, 103, 189, 122, 17, 135, 62, 80, 242, 226, 60, 225, 241, 210, 189, 242, 153, 126, 190, 224, 56, 68, 62, 34, 24, 249, 60, 132, 29, 202, 189, 16, 141, 142, 61, 36, 174, 211, 61, 37, 155, 206, 62, 108, 59, 167, 189, 5, 136, 70, 62, 76, 102, 165, 190, 143, 132, 30, 61, 88, 107, 128, 190, 67, 88, 228, 61, 166, 150, 179, 61, 161, 181, 133, 190, 57, 222, 77, 61, 193, 194, 44, 190, 148, 105, 161, 190, 142, 76, 155, 190, 150, 100, 18, 61, 162, 206, 22, 188, 216, 21, 184, 62, 167, 220, 13, 62, 14, 8, 168, 61, 70, 218, 44, 62, 62, 78, 128, 62, 142, 115, 213, 190, 84, 84, 107, 191, 199, 55, 43, 190, 179, 232, 20, 62, 220, 39, 145, 61, 157, 10, 192, 189, 170, 132, 172, 188, 150, 12, 179, 60, 221, 197, 47, 61, 48, 68, 231, 60, 82, 249, 3, 62, 236, 218, 232, 190, 75, 149, 175, 62, 107, 196, 183, 188, 59, 120, 173, 189, 36, 130, 188, 188, 161, 158, 213, 61, 234, 183, 94, 62, 222, 179, 6, 191, 68, 104, 53, 61, 252, 94, 2, 191, 18, 195, 149, 188, 81, 241, 68, 190, 58, 53, 219, 189, 48, 139, 42, 190, 159, 137, 92, 190, 53, 153, 79, 190, 145, 183, 176, 62, 124, 17, 17, 62, 26, 237, 122, 61, 206, 218, 61, 60, 247, 195, 124, 61, 173, 236, 73, 62, 170, 50, 196, 190, 21, 196, 251, 189, 186, 165, 16, 190, 161, 201, 9, 190, 35, 187, 23, 61, 46, 210, 148, 190, 93, 144, 193, 189, 108, 244, 99, 62, 238, 71, 231, 189, 13, 65, 150, 61, 101, 192, 133, 187, 251, 96, 26, 190, 125, 238, 187, 189, 151, 15, 29, 191, 198, 208, 64, 189, 80, 63, 86, 190, 195, 50, 95, 188, 107, 70, 117, 62, 172, 204, 111, 190, 5, 122, 148, 59, 217, 142, 77, 62, 237, 110, 13, 190, 179, 79, 98, 191, 121, 46, 72, 191, 225, 69, 137, 62, 202, 0, 153, 60, 230, 68, 130, 62, 43, 229, 178, 189, 230, 105, 92, 61, 30, 63, 43, 62, 207, 123, 133, 189, 255, 201, 5, 190, 144, 232, 237, 60, 26, 74, 31, 190, 78, 239, 195, 61, 196, 71, 92, 188, 52, 178, 63, 189, 235, 224, 153, 61, 187, 168, 166, 189, 214, 50, 26, 190, 163, 151, 14, 190, 126, 152, 18, 62, 248, 131, 32, 62, 70, 50, 0, 190, 184, 211, 208, 189, 176, 252, 152, 189, 129, 150, 219, 188, 14, 206, 178, 189, 214, 18, 253, 189, 101, 119, 177, 189, 90, 233, 202, 189, 244, 132, 12, 61, 115, 209, 103, 189, 224, 240, 29, 190, 173, 247, 53, 189, 86, 245, 46, 61, 144, 47, 41, 190, 36, 149, 87, 189, 1, 6, 92, 187, 78, 2, 18, 62, 24, 112, 150, 61, 163, 132, 130, 62, 54, 254, 141, 60, 29, 133, 16, 61, 81, 236, 151, 61, 168, 42, 117, 190, 166, 56, 234, 190, 100, 123, 144, 62, 11, 219, 175, 62, 220, 228, 189, 190, 144, 142, 168, 62, 161, 49, 40, 190, 129, 79, 161, 190, 111, 133, 227, 61, 19, 138, 50, 62, 155, 169, 15, 62, 125, 54, 91, 61, 144, 34, 19, 190, 242, 134, 85, 62, 243, 254, 202, 190, 28, 49, 20, 62, 250, 219, 53, 62, 181, 54, 176, 190, 96, 245, 102, 62, 117, 122, 21, 61, 52, 146, 209, 190, 125, 62, 81, 62, 153, 13, 38, 190, 244, 99, 36, 190, 56, 14, 220, 190, 130, 19, 41, 191, 69, 92, 155, 61, 255, 55, 131, 189, 149, 16, 244, 189, 129, 5, 115, 189, 244, 24, 239, 189, 240, 212, 181, 61, 188, 108, 12, 62, 224, 169, 15, 190, 148, 184, 30, 190, 173, 92, 254, 61, 56, 104, 107, 61, 25, 1, 254, 189, 30, 137, 96, 189, 234, 26, 50, 60, 100, 74, 199, 189, 97, 136, 35, 190, 227, 69, 208, 61, 191, 191, 42, 190, 82, 97, 178, 61, 101, 250, 250, 189, 217, 92, 23, 190, 10, 211, 182, 61, 227, 174, 23, 61, 63, 40, 172, 59, 184, 209, 7, 62, 42, 174, 29, 190, 239, 192, 53, 189, 21, 2, 51, 190, 6, 180, 20, 61, 90, 37, 24, 62, 165, 52, 3, 189, 180, 38, 183, 61, 61, 149, 169, 61, 186, 85, 212, 61, 50, 115, 101, 189, 159, 172, 139, 60, 17, 16, 47, 190, 25, 162, 8, 60, 199, 61, 29, 62, 197, 85, 255, 189, 170, 93, 190, 61, 6, 64, 218, 189, 147, 62, 186, 60, 84, 11, 175, 189, 201, 123, 169, 188, 95, 196, 51, 190, 114, 149, 4, 190, 2, 167, 74, 60, 59, 68, 165, 187, 46, 102, 176, 61, 22, 38, 50, 190, 162, 92, 173, 189, 150, 91, 46, 187, 22, 36, 43, 190, 131, 152, 249, 60, 93, 155, 9, 62, 193, 176, 95, 61, 158, 67, 28, 61, 240, 73, 27, 190, 169, 250, 21, 187, 26, 105, 152, 61, 250, 18, 221, 189, 141, 18, 48, 190, 241, 15, 89, 61, 18, 207, 131, 61, 161, 152, 51, 62, 192, 68, 232, 190, 109, 222, 101, 62, 242, 180, 149, 61, 18, 224, 76, 191, 85, 34, 13, 62, 31, 207, 10, 62, 160, 89, 148, 61, 14, 72, 156, 190, 29, 103, 16, 190, 189, 250, 86, 190, 233, 77, 240, 61, 171, 254, 60, 62, 241, 45, 135, 61, 99, 3, 222, 61, 55, 47, 65, 190, 178, 184, 108, 190, 153, 99, 21, 190, 195, 177, 147, 190, 149, 100, 176, 62, 226, 61, 44, 189, 143, 9, 211, 61, 87, 70, 28, 62, 137, 255, 216, 189, 37, 172, 49, 62, 218, 143, 120, 190, 178, 95, 35, 191, 152, 149, 134, 190, 112, 143, 2, 62, 36, 236, 90, 62, 59, 22, 229, 62, 115, 19, 17, 62, 179, 16, 211, 60, 138, 183, 211, 60, 82, 95, 4, 190, 164, 182, 75, 62, 23, 9, 167, 190, 131, 45, 251, 61, 215, 77, 81, 190, 137, 53, 229, 190, 115, 111, 62, 189, 35, 40, 22, 190, 175, 210, 55, 60, 220, 121, 209, 189, 244, 134, 121, 190, 79, 81, 230, 61, 81, 166, 59, 189, 113, 242, 201, 190, 15, 221, 205, 189, 59, 13, 86, 191, 86, 220, 136, 191, 223, 222, 67, 190, 140, 110, 70, 191, 108, 204, 85, 62, 76, 167, 72, 61, 27, 154, 200, 61, 181, 177, 95, 62, 141, 182, 151, 62, 191, 70, 138, 191, 109, 113, 38, 191, 223, 123, 71, 190, 192, 75, 21, 190, 216, 33, 142, 190, 72, 124, 248, 61, 194, 120, 30, 190, 154, 204, 90, 189, 48, 21, 247, 189, 39, 117, 136, 189, 190, 52, 17, 190, 42, 27, 201, 60, 26, 82, 76, 185, 237, 57, 190, 189, 14, 210, 37, 190, 107, 223, 224, 60, 139, 58, 247, 188, 115, 244, 0, 62, 214, 208, 52, 190, 33, 188, 144, 188, 6, 104, 42, 61, 213, 135, 215, 189, 146, 86, 136, 61, 167, 128, 6, 190, 227, 199, 108, 188, 52, 139, 50, 187, 147, 197, 49, 62, 211, 145, 189, 189, 251, 77, 156, 189, 12, 23, 236, 188, 92, 16, 43, 187, 152, 236, 240, 188, 35, 27, 172, 188, 104, 250, 206, 61, 182, 236, 213, 61, 121, 61, 40, 190, 149, 160, 179, 189, 35, 178, 30, 190, 212, 234, 120, 189, 52, 103, 49, 189, 104, 220, 243, 61, 243, 167, 135, 61, 90, 50, 84, 190, 78, 46, 38, 190, 116, 14, 46, 62, 218, 178, 65, 62, 171, 67, 32, 189, 235, 10, 202, 189, 189, 118, 23, 62, 144, 179, 191, 61, 34, 224, 158, 189, 180, 233, 102, 61, 100, 45, 144, 59, 132, 170, 125, 62, 0, 16, 147, 61, 60, 64, 36, 189, 207, 3, 107, 190, 184, 150, 111, 61, 252, 102, 23, 61, 119, 136, 129, 189, 198, 93, 177, 189, 27, 219, 143, 190, 93, 174, 50, 62, 39, 105, 42, 190, 134, 174, 183, 189, 219, 176, 12, 190, 57, 121, 241, 189, 127, 42, 113, 189, 144, 152, 63, 62, 241, 147, 50, 62, 41, 84, 39, 190, 169, 53, 237, 190, 134, 51, 248, 61, 137, 230, 16, 62, 210, 230, 199, 190, 220, 87, 66, 62, 226, 47, 67, 61, 227, 169, 77, 190, 171, 236, 116, 190, 106, 7, 8, 62, 132, 32, 146, 189, 179, 52, 92, 62, 27, 40, 204, 189, 164, 4, 88, 62, 188, 40, 22, 62, 157, 199, 115, 190, 205, 135, 89, 190, 147, 120, 177, 190, 47, 27, 79, 191, 32, 232, 182, 189, 128, 14, 90, 191, 134, 230, 147, 62, 192, 249, 33, 62, 111, 5, 4, 62, 197, 153, 89, 62, 199, 223, 251, 61, 247, 134, 180, 191, 140, 1, 25, 191, 138, 15, 168, 61, 43, 47, 226, 61, 179, 2, 167, 61, 103, 146, 131, 61, 46, 202, 151, 189, 229, 110, 132, 62, 122, 50, 177, 189, 164, 121, 26, 189, 169, 24, 207, 187, 245, 131, 252, 59, 68, 249, 187, 61, 55, 210, 137, 188, 60, 205, 234, 189, 149, 194, 8, 62, 103, 196, 107, 190, 135, 208, 18, 62, 239, 70, 225, 61, 242, 135, 29, 189, 177, 117, 84, 190, 65, 130, 102, 190, 32, 170, 41, 62, 49, 114, 62, 60, 192, 78, 156, 61, 250, 72, 151, 189, 103, 213, 130, 61, 48, 79, 146, 190, 24, 198, 206, 61, 33, 99, 198, 61, 237, 112, 122, 189, 70, 50, 90, 190, 185, 0, 6, 62, 73, 62, 11, 62, 197, 27, 15, 61, 140, 193, 212, 61, 25, 39, 7, 63, 37, 131, 32, 62, 3, 240, 147, 62, 246, 206, 131, 189, 165, 80, 65, 61, 28, 138, 24, 62, 140, 238, 86, 62, 186, 161, 39, 191, 205, 15, 242, 189, 38, 154, 172, 62, 104, 145, 40, 62, 209, 32, 151, 190, 125, 217, 13, 61, 186, 253, 210, 61, 94, 190, 65, 190, 179, 67, 193, 188, 3, 132, 221, 188, 190, 127, 193, 62, 144, 230, 213, 61, 146, 0, 38, 189, 85, 208, 40, 60, 235, 102, 159, 190, 52, 232, 147, 62, 4, 47, 168, 62, 4, 178, 74, 190, 95, 96, 3, 62, 117, 55, 22, 62, 113, 243, 119, 62, 93, 237, 1, 62, 215, 154, 26, 62, 250, 76, 59, 190, 218, 240, 146, 189, 249, 149, 195, 190, 82, 57, 155, 189, 98, 24, 17, 62, 219, 5, 2, 61, 85, 205, 202, 188, 118, 139, 202, 189, 71, 216, 65, 62, 169, 232, 143, 189, 185, 135, 160, 190, 207, 229, 97, 62, 245, 58, 146, 189, 33, 237, 23, 190, 234, 196, 145, 61, 32, 39, 33, 190, 206, 245, 176, 60, 249, 204, 229, 61, 110, 103, 148, 61, 226, 92, 158, 62, 212, 17, 171, 189, 104, 59, 223, 60, 137, 57, 146, 62, 242, 86, 137, 61, 171, 250, 130, 62, 71, 103, 94, 62, 196, 215, 50, 190, 73, 64, 43, 60, 79, 235, 129, 62, 37, 61, 136, 190, 241, 221, 238, 60, 122, 212, 135, 188, 75, 139, 199, 59, 132, 55, 244, 190, 5, 190, 190, 190, 10, 205, 206, 60, 87, 69, 25, 190, 37, 11, 85, 62, 134, 99, 77, 62, 35, 220, 248, 61, 242, 113, 34, 62, 62, 185, 46, 189, 181, 248, 32, 61, 49, 129, 177, 61, 14, 247, 156, 188, 211, 228, 185, 61, 254, 199, 43, 190, 106, 56, 134, 190, 241, 163, 154, 61, 118, 224, 135, 61, 30, 108, 13, 189, 4, 206, 197, 62, 20, 123, 105, 190, 53, 156, 46, 62, 74, 98, 82, 62, 187, 239, 254, 189, 17, 209, 75, 62, 185, 149, 30, 61, 28, 87, 169, 189, 143, 68, 173, 61, 134, 79, 85, 62, 220, 176, 123, 190, 207, 160, 218, 189, 86, 12, 195, 189, 15, 39, 168, 189, 246, 81, 156, 190, 207, 47, 56, 189, 180, 184, 179, 61, 146, 202, 172, 190, 85, 72, 119, 61, 161, 157, 72, 190, 109, 2, 250, 190, 135, 69, 206, 60, 11, 55, 138, 60, 117, 55, 243, 61, 197, 76, 2, 188, 116, 202, 157, 62, 0, 233, 118, 190, 190, 41, 113, 62, 240, 115, 192, 61, 58, 59, 234, 187, 122, 145, 27, 62, 182, 166, 129, 190, 94, 212, 199, 62, 150, 5, 211, 61, 232, 101, 157, 188, 66, 113, 210, 189, 205, 221, 170, 189, 70, 168, 2, 190, 73, 180, 36, 190, 173, 183, 223, 60, 138, 228, 20, 191, 255, 117, 104, 62, 135, 17, 254, 189, 26, 247, 76, 61, 62, 255, 24, 59, 45, 188, 251, 188, 134, 195, 23, 190, 108, 96, 55, 190, 76, 202, 6, 189, 159, 15, 149, 61, 118, 10, 13, 61, 76, 222, 91, 62, 49, 72, 140, 189, 58, 4, 14, 62, 34, 108, 49, 190, 124, 230, 240, 188, 230, 253, 28, 62, 195, 172, 192, 61, 151, 163, 55, 190, 31, 129, 65, 62, 85, 205, 125, 62, 102, 173, 29, 61, 79, 251, 107, 189, 149, 212, 59, 62, 64, 164, 191, 62, 196, 187, 218, 189, 108, 139, 178, 61, 99, 106, 229, 60, 131, 131, 255, 188, 199, 31, 54, 62, 173, 120, 247, 61, 249, 36, 131, 190, 218, 169, 131, 188, 200, 173, 148, 62, 25, 143, 45, 62, 227, 148, 25, 62, 49, 143, 84, 189, 88, 130, 78, 188, 25, 62, 25, 62, 93, 225, 142, 62, 56, 168, 48, 61, 18, 201, 234, 61, 194, 1, 65, 188, 1, 187, 12, 62, 83, 98, 228, 61, 60, 209, 38, 62, 27, 167, 136, 61, 145, 13, 13, 190, 63, 37, 55, 190, 134, 185, 7, 190, 168, 26, 155, 61, 188, 54, 249, 189, 168, 21, 163, 190, 68, 132, 91, 189, 77, 20, 51, 190, 206, 133, 99, 62, 28, 254, 23, 190, 42, 61, 124, 190, 119, 39, 21, 189, 113, 171, 38, 189, 49, 89, 44, 190, 122, 96, 231, 61, 211, 245, 172, 61, 169, 18, 4, 61, 232, 6, 60, 61, 183, 70, 60, 190, 226, 237, 139, 62, 188, 201, 164, 61, 67, 255, 9, 62, 35, 71, 155, 189, 104, 163, 229, 190, 15, 6, 169, 61, 51, 241, 9, 61, 116, 134, 10, 190, 213, 100, 133, 61, 149, 102, 136, 189, 78, 137, 89, 62, 1, 71, 125, 62, 118, 171, 17, 61, 161, 195, 12, 189, 98, 77, 31, 61, 142, 214, 95, 62, 83, 220, 212, 60, 142, 78, 42, 61, 168, 56, 3, 60, 231, 210, 157, 189, 252, 62, 133, 189, 227, 216, 124, 61, 140, 249, 135, 59, 75, 174, 186, 61, 162, 231, 189, 61, 54, 115, 161, 61, 150, 90, 62, 190, 69, 253, 9, 62, 112, 179, 13, 62, 100, 84, 5, 62, 0, 98, 126, 61, 60, 225, 73, 189, 75, 54, 160, 62, 47, 105, 205, 60, 206, 198, 249, 188, 84, 4, 137, 190, 103, 158, 41, 61, 218, 185, 54, 62, 118, 117, 36, 62, 21, 209, 226, 61, 179, 50, 190, 60, 42, 198, 151, 61, 140, 141, 231, 59, 80, 171, 163, 187, 243, 43, 51, 190, 147, 213, 178, 189, 111, 168, 186, 62, 54, 179, 210, 61, 170, 203, 40, 190, 82, 250, 60, 62, 39, 12, 221, 189, 255, 100, 42, 190, 69, 58, 66, 190, 187, 150, 1, 190, 98, 221, 80, 62, 23, 36, 38, 62, 78, 252, 140, 62, 177, 227, 144, 61, 90, 15, 175, 189, 36, 102, 157, 62, 31, 150, 163, 61, 96, 198, 78, 190, 95, 216, 190, 189, 121, 26, 130, 62, 89, 82, 88, 187, 130, 165, 67, 62, 175, 166, 78, 61, 240, 209, 133, 190, 198, 207, 176, 188, 135, 111, 96, 62, 252, 134, 185, 61, 248, 99, 183, 189, 52, 121, 151, 61, 185, 223, 166, 188, 147, 188, 255, 189, 69, 42, 169, 188, 18, 108, 254, 61, 18, 248, 35, 190, 216, 242, 45, 60, 17, 16, 215, 189, 148, 116, 136, 60, 21, 176, 107, 189, 219, 48, 251, 189, 153, 44, 37, 62, 196, 6, 235, 188, 61, 97, 110, 61, 106, 147, 20, 190, 1, 83, 5, 190, 218, 114, 246, 189, 158, 5, 42, 190, 162, 22, 69, 60, 195, 229, 100, 189, 114, 170, 38, 62, 219, 87, 108, 61, 184, 142, 136, 188, 89, 163, 27, 190, 107, 179, 159, 189, 134, 23, 250, 60, 31, 55, 187, 61, 47, 0, 28, 190, 219, 104, 159, 188, 1, 158, 93, 188, 201, 189, 132, 187, 93, 42, 27, 62, 20, 83, 218, 190, 121, 21, 67, 62, 254, 84, 1, 189, 54, 139, 13, 62, 193, 156, 169, 190, 16, 139, 106, 189, 35, 176, 12, 62, 19, 7, 235, 61, 148, 106, 171, 190, 144, 243, 201, 62, 238, 142, 47, 62, 231, 152, 113, 190, 47, 82, 203, 190, 128, 54, 67, 62, 19, 142, 142, 62, 186, 253, 218, 189, 29, 148, 241, 61, 70, 110, 91, 189, 121, 158, 119, 190, 43, 222, 134, 61, 102, 53, 45, 62, 128, 243, 212, 190, 52, 253, 99, 62, 61, 231, 149, 62, 168, 173, 23, 62, 139, 143, 255, 61, 64, 62, 241, 61, 55, 88, 111, 189, 61, 45, 172, 190, 102, 177, 7, 191, 70, 253, 16, 187, 67, 122, 56, 62, 22, 112, 45, 190, 247, 153, 28, 62, 153, 205, 69, 62, 64, 64, 145, 189, 186, 44, 83, 189, 129, 43, 65, 189, 219, 91, 23, 61, 224, 66, 244, 189, 175, 59, 136, 189, 26, 183, 141, 61, 13, 127, 132, 62, 120, 191, 5, 189, 188, 254, 254, 189, 117, 216, 131, 62, 146, 113, 12, 62, 139, 32, 5, 190, 204, 64, 47, 62, 83, 195, 149, 61, 235, 111, 191, 61, 73, 252, 5, 190, 80, 114, 95, 62, 202, 225, 12, 190, 142, 132, 37, 61, 247, 15, 93, 62, 238, 4, 207, 61, 89, 177, 220, 61, 19, 39, 159, 189, 115, 251, 185, 189, 184, 177, 23, 62, 214, 226, 143, 62, 152, 152, 229, 189, 131, 46, 119, 189, 153, 48, 163, 190, 203, 141, 170, 61, 121, 235, 189, 62, 196, 244, 227, 61, 130, 40, 99, 189, 207, 38, 51, 61, 33, 196, 155, 189, 61, 236, 18, 191, 223, 95, 180, 189, 125, 213, 3, 191, 25, 172, 15, 61, 223, 86, 231, 60, 226, 44, 154, 61, 67, 164, 20, 62, 30, 14, 196, 190, 63, 76, 43, 190, 120, 50, 28, 62, 107, 235, 2, 189, 208, 140, 103, 190, 217, 134, 97, 188, 78, 220, 95, 61, 148, 203, 98, 189, 102, 7, 122, 62, 80, 8, 11, 190, 196, 16, 240, 62, 63, 102, 241, 61, 25, 50, 232, 61, 68, 92, 161, 187, 252, 43, 128, 189, 117, 132, 113, 62, 70, 250, 191, 61, 169, 15, 109, 62, 82, 227, 165, 190, 250, 127, 131, 190, 80, 166, 180, 61, 202, 182, 139, 190, 1, 238, 47, 62, 35, 235, 217, 61, 102, 161, 153, 189, 45, 143, 156, 190, 206, 228, 222, 187, 130, 51, 130, 190, 43, 87, 101, 62, 60, 230, 41, 190, 221, 101, 52, 188, 159, 68, 157, 189, 76, 159, 134, 190, 40, 188, 138, 188, 93, 34, 101, 190, 3, 100, 228, 189, 94, 172, 178, 189, 94, 23, 167, 189, 60, 38, 28, 59, 64, 189, 33, 189, 5, 216, 48, 189, 233, 182, 165, 190, 213, 77, 32, 190, 189, 251, 207, 190, 126, 215, 204, 190, 185, 64, 203, 189, 16, 138, 22, 62, 29, 152, 235, 62, 41, 124, 23, 62, 26, 84, 222, 60, 133, 93, 193, 188, 80, 90, 194, 185, 185, 181, 17, 62, 85, 39, 7, 62, 211, 206, 66, 62, 150, 132, 2, 62, 168, 108, 222, 61, 88, 220, 114, 190, 66, 218, 199, 61, 21, 170, 87, 190, 98, 168, 26, 190, 41, 234, 190, 61, 111, 135, 182, 190, 191, 246, 47, 62, 196, 17, 36, 61, 25, 38, 151, 190, 47, 229, 217, 61, 230, 167, 56, 61, 23, 53, 154, 61, 136, 93, 29, 62, 49, 255, 10, 190, 39, 162, 221, 61, 159, 190, 2, 62, 207, 233, 131, 189, 175, 215, 175, 189, 204, 227, 93, 62, 93, 198, 101, 189, 87, 175, 229, 61, 221, 247, 204, 189, 140, 19, 50, 188, 171, 28, 51, 61, 123, 128, 196, 190, 115, 120, 253, 190, 68, 113, 233, 188, 148, 50, 157, 61, 2, 193, 52, 61, 212, 231, 226, 62, 34, 16, 185, 62, 100, 63, 31, 191, 52, 51, 129, 190, 173, 57, 37, 62, 130, 194, 69, 190, 187, 165, 246, 61, 175, 1, 226, 62, 98, 62, 249, 61, 197, 115, 22, 62, 193, 171, 159, 190, 208, 140, 251, 60, 194, 236, 152, 61, 167, 47, 28, 191, 115, 62, 15, 62, 34, 56, 136, 190, 252, 6, 65, 62, 215, 105, 95, 62, 113, 60, 234, 189, 206, 84, 251, 61, 167, 244, 43, 190, 22, 162, 77, 191, 65, 37, 255, 189, 171, 255, 168, 190, 77, 203, 150, 62, 226, 134, 247, 62, 88, 209, 37, 190, 10, 66, 101, 190};
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
                alignas(float) const unsigned char memory[] = {87, 134, 172, 62, 187, 226, 134, 61, 121, 243, 11, 62, 107, 169, 45, 190, 190, 251, 228, 61, 255, 180, 68, 61, 46, 216, 206, 61, 224, 116, 50, 190, 101, 36, 235, 60, 7, 163, 190, 189, 218, 89, 4, 190, 179, 51, 141, 62, 11, 66, 9, 62, 62, 59, 36, 190, 250, 68, 106, 62, 89, 94, 226, 60, 104, 30, 176, 189, 4, 198, 60, 62, 128, 91, 210, 189, 112, 38, 118, 62, 12, 218, 55, 190, 160, 82, 52, 62, 245, 166, 167, 61, 168, 35, 53, 62, 135, 163, 197, 61, 215, 140, 12, 190, 138, 147, 126, 62, 90, 110, 157, 61, 135, 29, 32, 62, 130, 97, 230, 189, 127, 172, 118, 189, 92, 77, 43, 62};
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
                alignas(float) const unsigned char memory[] = {163, 204, 183, 190, 183, 54, 62, 190, 184, 151, 9, 63, 226, 49, 192, 61, 177, 234, 36, 62, 33, 51, 214, 190, 183, 25, 254, 190, 180, 141, 248, 189, 142, 180, 102, 191, 50, 190, 153, 187, 10, 206, 218, 60, 224, 206, 29, 191, 223, 10, 54, 191, 96, 236, 50, 190, 25, 113, 178, 189, 5, 193, 85, 191, 171, 211, 34, 189, 74, 47, 200, 62, 245, 93, 222, 190, 224, 40, 46, 190, 168, 99, 192, 62, 151, 203, 231, 61, 231, 1, 217, 61, 185, 127, 245, 61, 8, 81, 120, 62, 150, 13, 24, 189, 125, 213, 34, 63, 100, 13, 23, 61, 170, 236, 62, 62, 36, 101, 120, 190, 23, 51, 84, 190, 155, 187, 36, 191, 117, 64, 60, 190, 105, 89, 255, 61, 247, 104, 128, 61, 179, 107, 37, 190, 209, 229, 180, 190, 42, 69, 213, 60, 112, 92, 77, 190, 166, 49, 15, 190, 22, 45, 146, 62, 244, 4, 189, 189, 73, 47, 5, 190, 123, 147, 127, 61, 67, 190, 17, 62, 11, 229, 64, 61, 253, 55, 96, 190, 144, 31, 15, 62, 88, 247, 133, 61, 172, 231, 95, 60, 137, 80, 220, 61, 154, 215, 88, 190, 249, 83, 116, 62, 239, 180, 36, 190, 102, 17, 122, 188, 113, 230, 138, 189, 44, 209, 16, 190, 17, 234, 46, 61, 127, 221, 87, 189, 201, 70, 39, 190, 80, 245, 101, 61, 224, 38, 23, 62, 167, 58, 46, 61, 0, 5, 37, 190};
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
                alignas(float) const unsigned char memory[] = {199, 146, 111, 62, 65, 215, 189, 189};
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
    alignas(float) const unsigned char memory[] = {16, 56, 89, 189, 233, 128, 148, 60, 206, 5, 114, 191};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 3, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

// NOTE: This code export assumes that the endianness of the target platform is the same as the endianness of the source platform
#include <rl_tools/containers.h>
namespace rl_tools::checkpoint::example::output {
    static_assert(sizeof(unsigned char) == 1);
    alignas(float) const unsigned char memory[] = {148, 111, 93, 191, 30, 152, 52, 191};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 2, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

namespace rl_tools::checkpoint::meta{
   char name[] = "experiments/2024-05-27_19-39-12/b738cd1_zoo_algorithm_environment/sac_pendulum-v1/0087/steps/000000000006000";
   char commit_hash[] = "b738cd18dcbee2b66aa05c642653771cd0e46c8b";
}