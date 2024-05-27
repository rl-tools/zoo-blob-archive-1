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
                alignas(float) const unsigned char memory[] = {74, 249, 81, 63, 0, 114, 1, 63, 49, 243, 121, 62, 59, 142, 57, 63, 159, 58, 114, 191, 102, 144, 45, 62, 203, 52, 71, 62, 241, 22, 247, 62, 115, 122, 137, 62, 5, 204, 48, 190, 144, 211, 222, 190, 24, 43, 186, 190, 146, 130, 53, 62, 173, 26, 135, 63, 178, 70, 60, 62, 69, 53, 66, 191, 72, 134, 24, 191, 239, 124, 34, 190, 202, 172, 155, 188, 10, 90, 155, 63, 17, 123, 51, 63, 129, 221, 11, 63, 223, 173, 121, 63, 189, 86, 29, 191, 43, 128, 11, 189, 245, 240, 224, 63, 46, 238, 17, 63, 191, 161, 35, 63, 81, 4, 167, 61, 41, 248, 145, 188, 109, 12, 79, 63, 33, 62, 122, 61, 85, 89, 20, 61, 155, 75, 65, 63, 119, 250, 144, 191, 125, 130, 191, 190, 208, 133, 179, 190, 186, 209, 217, 191, 121, 4, 3, 191, 221, 19, 217, 190, 253, 176, 115, 191, 104, 96, 99, 190, 115, 6, 143, 190, 30, 47, 91, 63, 140, 236, 66, 191, 195, 77, 68, 63, 231, 187, 119, 62, 85, 168, 11, 189, 66, 39, 90, 190, 55, 202, 60, 62, 193, 244, 95, 191, 14, 88, 91, 63, 147, 76, 223, 62, 223, 48, 116, 62, 82, 5, 185, 190, 26, 225, 32, 191, 46, 239, 211, 190, 251, 100, 73, 191, 79, 29, 106, 191, 39, 233, 131, 62, 238, 65, 27, 191, 214, 5, 87, 191, 98, 144, 240, 189, 239, 207, 35, 190, 94, 56, 28, 190, 94, 8, 56, 61, 136, 143, 111, 61, 25, 180, 66, 191, 155, 90, 134, 190, 118, 110, 129, 62, 20, 87, 234, 62, 51, 130, 76, 62, 147, 212, 33, 62, 231, 213, 120, 191, 146, 184, 58, 63, 26, 43, 81, 190, 156, 254, 51, 62, 247, 166, 179, 62, 220, 59, 19, 190, 227, 151, 154, 62, 130, 14, 246, 190, 28, 28, 40, 191, 71, 233, 28, 191, 57, 99, 224, 189, 4, 134, 97, 62, 43, 37, 154, 62, 13, 146, 15, 189, 85, 70, 177, 190, 82, 42, 133, 63, 19, 81, 34, 62, 82, 59, 40, 190, 111, 32, 60, 191, 208, 173, 186, 62, 253, 25, 123, 190, 91, 78, 67, 190, 37, 254, 132, 191};
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
                alignas(float) const unsigned char memory[] = {10, 80, 29, 191, 122, 29, 30, 62, 153, 142, 253, 188, 95, 226, 177, 60, 184, 33, 24, 63, 149, 159, 74, 63, 38, 249, 176, 190, 194, 235, 197, 62, 173, 253, 178, 61, 182, 158, 37, 61, 251, 82, 229, 62, 24, 44, 190, 189, 76, 161, 8, 61, 241, 42, 203, 62, 190, 0, 169, 190, 74, 35, 225, 62, 193, 31, 110, 191, 249, 158, 202, 190, 156, 73, 241, 61, 51, 211, 63, 190, 25, 233, 210, 62, 162, 118, 17, 191, 162, 221, 103, 62, 81, 37, 201, 189, 114, 95, 100, 190, 246, 74, 52, 63, 221, 146, 212, 190, 6, 146, 12, 63, 69, 190, 5, 191, 76, 166, 153, 62, 178, 134, 158, 190, 11, 118, 133, 62};
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
                alignas(float) const unsigned char memory[] = {206, 176, 72, 191, 32, 16, 129, 190, 40, 58, 42, 189, 53, 246, 151, 189, 139, 208, 126, 62, 201, 235, 186, 62, 126, 252, 235, 189, 171, 132, 205, 190, 36, 113, 187, 189, 10, 209, 44, 191, 221, 249, 26, 62, 35, 96, 77, 191, 155, 40, 37, 190, 104, 114, 12, 62, 177, 180, 166, 62, 130, 210, 161, 62, 54, 116, 206, 61, 88, 182, 245, 190, 239, 70, 76, 62, 192, 82, 221, 62, 215, 223, 147, 62, 138, 129, 11, 190, 18, 45, 185, 61, 240, 202, 153, 190, 148, 144, 91, 190, 146, 97, 199, 61, 108, 134, 15, 191, 179, 242, 85, 62, 100, 43, 29, 61, 11, 67, 136, 62, 166, 93, 78, 62, 43, 39, 51, 62, 33, 58, 18, 191, 153, 181, 146, 62, 123, 31, 23, 189, 167, 108, 58, 190, 169, 63, 212, 189, 1, 193, 208, 188, 17, 136, 238, 61, 244, 22, 197, 61, 64, 248, 126, 62, 14, 217, 250, 60, 118, 4, 150, 190, 48, 18, 194, 62, 247, 40, 168, 61, 160, 11, 21, 60, 160, 240, 51, 60, 131, 140, 73, 190, 221, 236, 19, 190, 68, 72, 191, 190, 147, 15, 4, 190, 226, 150, 246, 190, 184, 5, 23, 190, 13, 56, 250, 189, 125, 216, 127, 188, 131, 244, 55, 190, 44, 58, 70, 62, 221, 170, 186, 61, 205, 153, 153, 62, 188, 126, 226, 61, 165, 223, 251, 60, 220, 40, 64, 188, 134, 77, 88, 190, 30, 250, 93, 189, 20, 134, 27, 190, 134, 95, 213, 62, 94, 83, 255, 61, 54, 250, 87, 58, 3, 104, 145, 191, 2, 93, 40, 190, 174, 151, 97, 190, 34, 135, 55, 189, 207, 98, 109, 62, 221, 215, 81, 191, 216, 10, 95, 191, 147, 28, 150, 61, 138, 250, 27, 62, 67, 17, 79, 62, 108, 94, 245, 61, 8, 98, 207, 190, 48, 229, 104, 62, 128, 100, 202, 188, 77, 147, 132, 62, 88, 146, 10, 189, 218, 151, 127, 62, 230, 78, 85, 61, 91, 64, 42, 190, 136, 59, 73, 62, 110, 187, 182, 61, 113, 100, 59, 190, 55, 222, 142, 61, 15, 230, 216, 189, 192, 121, 134, 189, 169, 206, 196, 191, 191, 240, 29, 190, 143, 142, 28, 62, 253, 23, 171, 189, 239, 73, 159, 62, 226, 127, 14, 190, 59, 243, 8, 191, 29, 121, 233, 61, 162, 169, 141, 189, 199, 150, 57, 62, 117, 220, 60, 62, 135, 125, 114, 62, 254, 92, 211, 62, 250, 47, 190, 190, 177, 188, 173, 59, 190, 152, 197, 191, 212, 75, 160, 189, 38, 12, 12, 191, 31, 64, 8, 191, 74, 74, 162, 191, 118, 168, 199, 189, 163, 106, 177, 61, 45, 75, 179, 190, 211, 147, 202, 60, 232, 179, 14, 189, 153, 13, 79, 190, 166, 106, 34, 189, 27, 88, 203, 62, 51, 159, 98, 62, 216, 109, 241, 189, 40, 161, 49, 62, 161, 114, 164, 61, 215, 74, 222, 61, 79, 37, 6, 61, 100, 212, 164, 191, 187, 188, 7, 60, 89, 147, 178, 189, 62, 106, 70, 188, 58, 173, 225, 189, 218, 145, 252, 189, 101, 3, 161, 189, 17, 8, 206, 189, 247, 161, 199, 188, 204, 182, 61, 190, 26, 88, 200, 61, 79, 141, 153, 188, 0, 123, 15, 190, 229, 78, 43, 190, 137, 251, 130, 189, 74, 8, 42, 190, 217, 26, 43, 190, 106, 193, 219, 59, 101, 221, 141, 189, 79, 2, 12, 62, 247, 168, 21, 62, 74, 234, 148, 61, 152, 4, 255, 61, 254, 120, 249, 61, 219, 133, 92, 189, 172, 155, 233, 61, 205, 255, 30, 190, 226, 85, 126, 61, 212, 129, 207, 189, 219, 35, 254, 61, 91, 26, 47, 188, 189, 48, 21, 187, 2, 45, 223, 189, 5, 190, 249, 189, 70, 108, 164, 62, 134, 44, 169, 61, 111, 207, 138, 191, 211, 62, 73, 61, 46, 178, 173, 191, 164, 157, 174, 58, 178, 218, 7, 62, 52, 31, 70, 61, 200, 77, 121, 190, 3, 246, 228, 62, 58, 115, 81, 189, 250, 231, 44, 192, 253, 31, 8, 191, 232, 22, 47, 190, 229, 155, 205, 62, 205, 232, 218, 190, 149, 135, 101, 189, 188, 234, 215, 190, 0, 215, 20, 62, 77, 175, 160, 191, 19, 69, 14, 190, 191, 246, 4, 62, 196, 229, 250, 61, 214, 29, 207, 61, 249, 19, 195, 61, 189, 61, 168, 61, 162, 151, 168, 191, 138, 143, 248, 188, 180, 32, 149, 190, 31, 77, 162, 189, 185, 206, 154, 190, 118, 220, 255, 190, 130, 4, 221, 62, 205, 45, 63, 188, 85, 230, 93, 190, 73, 96, 143, 62, 74, 183, 9, 188, 97, 180, 186, 62, 211, 102, 35, 63, 92, 200, 158, 62, 227, 21, 240, 62, 166, 200, 45, 62, 99, 237, 15, 63, 157, 54, 205, 191, 229, 216, 232, 189, 127, 78, 206, 190, 51, 76, 133, 62, 158, 88, 38, 191, 67, 221, 209, 190, 225, 34, 42, 191, 75, 178, 179, 190, 145, 28, 46, 62, 84, 1, 15, 190, 57, 88, 183, 62, 10, 4, 247, 186, 244, 187, 254, 61, 87, 102, 107, 62, 13, 116, 129, 61, 62, 227, 210, 189, 65, 185, 19, 190, 41, 129, 75, 62, 116, 72, 185, 190, 195, 133, 41, 191, 62, 225, 111, 191, 48, 233, 170, 190, 52, 6, 24, 190, 153, 134, 55, 191, 162, 86, 57, 62, 143, 120, 72, 62, 192, 220, 241, 61, 180, 201, 234, 62, 248, 142, 101, 61, 177, 145, 83, 191, 205, 98, 138, 190, 237, 249, 101, 190, 94, 49, 252, 61, 96, 57, 28, 62, 70, 74, 117, 62, 32, 194, 156, 61, 54, 1, 138, 190, 78, 182, 95, 191, 237, 68, 242, 190, 212, 128, 13, 190, 74, 115, 248, 188, 140, 101, 31, 61, 113, 126, 51, 190, 48, 96, 12, 190, 5, 83, 58, 191, 201, 78, 157, 189, 96, 150, 18, 189, 135, 244, 25, 190, 104, 98, 26, 62, 22, 117, 46, 62, 65, 91, 252, 190, 164, 210, 151, 190, 26, 155, 244, 189, 146, 247, 155, 190, 82, 185, 187, 60, 207, 225, 11, 190, 61, 87, 217, 189, 29, 181, 20, 190, 254, 108, 221, 188, 88, 190, 3, 62, 119, 137, 84, 62, 44, 0, 61, 191, 189, 129, 144, 190, 226, 126, 76, 191, 27, 77, 52, 188, 133, 18, 65, 190, 139, 244, 59, 62, 56, 21, 45, 59, 179, 193, 65, 61, 147, 174, 201, 188, 1, 241, 22, 61, 59, 123, 139, 62, 224, 91, 83, 189, 239, 71, 46, 62, 24, 67, 186, 190, 143, 59, 253, 188, 13, 74, 43, 188, 220, 80, 185, 188, 219, 232, 90, 62, 196, 82, 93, 190, 63, 8, 53, 190, 102, 121, 246, 61, 35, 220, 227, 61, 70, 71, 229, 61, 202, 18, 240, 60, 188, 187, 167, 62, 89, 90, 109, 189, 89, 0, 136, 191, 68, 2, 213, 61, 247, 66, 147, 190, 132, 46, 114, 62, 180, 154, 215, 62, 254, 215, 226, 61, 130, 114, 137, 190, 133, 40, 68, 190, 39, 112, 198, 62, 255, 239, 218, 190, 243, 77, 132, 189, 133, 3, 208, 61, 111, 101, 132, 190, 17, 113, 248, 189, 43, 176, 53, 62, 222, 43, 26, 191, 70, 206, 167, 60, 208, 109, 99, 190, 28, 164, 177, 61, 215, 122, 220, 190, 111, 129, 48, 190, 54, 107, 59, 62, 210, 24, 139, 61, 11, 180, 217, 61, 193, 183, 9, 189, 218, 223, 21, 62, 216, 66, 221, 60, 228, 170, 246, 189, 151, 134, 177, 190, 118, 72, 201, 188, 172, 82, 232, 188, 208, 230, 249, 189, 155, 105, 160, 189, 112, 39, 246, 61, 209, 189, 110, 188, 40, 20, 159, 189, 23, 247, 25, 188, 28, 60, 37, 61, 114, 240, 219, 61, 71, 4, 42, 190, 34, 190, 98, 60, 254, 230, 87, 60, 112, 146, 130, 189, 114, 129, 49, 61, 219, 116, 25, 190, 19, 236, 180, 61, 212, 213, 33, 60, 231, 210, 72, 190, 84, 62, 0, 190, 7, 94, 79, 190, 111, 157, 156, 189, 116, 110, 8, 190, 110, 105, 58, 62, 151, 225, 41, 189, 76, 57, 19, 190, 99, 36, 187, 188, 204, 151, 193, 187, 84, 141, 188, 61, 248, 67, 46, 190, 9, 127, 49, 60, 172, 88, 129, 189, 60, 217, 181, 190, 77, 65, 89, 62, 98, 181, 140, 188, 126, 85, 12, 191, 144, 162, 114, 187, 173, 55, 158, 62, 45, 89, 7, 62, 248, 117, 50, 62, 130, 223, 94, 60, 137, 29, 151, 190, 106, 188, 247, 190, 247, 249, 117, 191, 26, 49, 68, 190, 127, 203, 174, 188, 55, 63, 104, 62, 118, 115, 68, 189, 208, 58, 200, 190, 253, 237, 30, 190, 170, 108, 89, 191, 141, 134, 171, 62, 195, 140, 112, 188, 39, 38, 245, 61, 175, 20, 139, 191, 230, 45, 81, 190, 90, 177, 95, 62, 143, 244, 193, 61, 196, 147, 169, 62, 3, 48, 183, 60, 57, 130, 253, 60, 195, 241, 78, 62, 233, 60, 109, 62, 159, 45, 69, 60, 20, 113, 66, 190, 184, 176, 169, 190, 156, 158, 255, 189, 129, 180, 49, 190, 184, 37, 144, 62, 155, 242, 25, 190, 204, 240, 72, 61, 236, 172, 129, 189, 105, 100, 148, 62, 98, 2, 71, 191, 220, 68, 132, 190, 105, 30, 25, 191, 156, 90, 252, 190, 126, 63, 61, 191, 150, 44, 147, 61, 1, 26, 236, 61, 48, 11, 191, 190, 13, 31, 78, 189, 72, 253, 144, 190, 105, 97, 190, 191, 124, 190, 133, 191, 122, 217, 184, 61, 235, 76, 13, 190, 87, 28, 118, 61, 168, 65, 81, 190, 185, 186, 201, 189, 41, 183, 226, 61, 189, 120, 156, 191, 202, 248, 56, 61, 153, 209, 94, 62, 8, 62, 123, 191, 122, 192, 19, 190, 86, 193, 71, 63, 160, 211, 155, 189, 139, 133, 129, 62, 154, 146, 41, 191, 96, 213, 154, 61, 221, 157, 69, 191, 193, 120, 84, 190, 57, 182, 164, 62, 74, 127, 37, 62, 51, 123, 111, 190, 130, 17, 96, 62, 131, 47, 138, 190, 210, 123, 198, 190, 228, 214, 175, 190, 140, 174, 136, 62, 18, 213, 171, 62, 46, 63, 171, 190, 252, 159, 61, 63, 44, 144, 202, 61, 220, 212, 242, 189, 37, 222, 29, 191, 48, 71, 153, 189, 31, 47, 84, 190, 67, 205, 27, 62, 165, 83, 237, 61, 194, 193, 64, 61, 53, 237, 14, 62, 72, 232, 22, 191, 174, 175, 128, 189, 12, 240, 227, 189, 146, 33, 4, 62, 254, 139, 134, 190, 187, 180, 143, 190, 91, 53, 80, 191, 206, 135, 114, 190, 185, 42, 83, 61, 33, 44, 67, 61, 159, 92, 33, 62, 56, 62, 130, 191, 138, 207, 173, 190, 70, 189, 143, 191, 82, 105, 160, 189, 195, 28, 189, 62, 188, 164, 19, 191, 239, 159, 55, 188, 156, 122, 206, 189, 9, 115, 142, 62, 29, 223, 147, 61, 202, 252, 178, 62, 120, 199, 236, 190, 83, 171, 129, 62, 145, 176, 213, 62, 153, 36, 109, 189, 49, 59, 130, 190, 96, 210, 148, 61, 44, 170, 48, 190, 211, 171, 70, 191, 114, 209, 2, 191, 16, 245, 175, 190, 12, 112, 89, 189, 154, 169, 1, 189, 11, 20, 38, 189, 190, 99, 216, 190, 222, 9, 126, 62, 25, 186, 103, 191, 94, 206, 140, 190, 244, 249, 160, 190, 221, 225, 151, 62, 219, 253, 95, 62, 215, 79, 115, 59, 215, 178, 107, 189, 144, 163, 165, 62, 61, 168, 156, 62, 238, 203, 69, 61, 31, 64, 214, 190, 178, 183, 91, 61, 167, 16, 233, 61, 19, 42, 130, 190, 107, 6, 194, 62, 201, 53, 78, 190, 74, 147, 194, 62, 113, 26, 223, 190, 219, 73, 148, 61, 113, 236, 15, 63, 105, 245, 95, 190, 75, 6, 64, 61, 89, 255, 168, 61, 170, 71, 38, 190, 203, 184, 113, 190, 54, 189, 98, 62, 223, 159, 52, 190, 138, 108, 24, 190, 35, 2, 132, 61, 121, 119, 22, 62, 183, 168, 176, 189, 197, 195, 46, 62, 187, 145, 78, 189, 114, 207, 51, 62, 46, 15, 44, 190, 37, 50, 37, 190, 186, 170, 250, 191, 141, 157, 156, 190, 143, 4, 230, 61, 106, 73, 129, 62, 171, 73, 145, 189, 31, 80, 38, 62, 19, 33, 91, 62, 123, 243, 242, 62, 73, 37, 137, 61, 231, 34, 76, 61, 216, 201, 49, 61, 173, 107, 59, 62, 4, 150, 81, 190, 106, 27, 185, 191, 135, 243, 252, 189, 183, 230, 14, 62, 69, 172, 121, 190, 145, 113, 208, 61, 167, 72, 78, 190, 187, 22, 118, 190, 16, 228, 51, 62, 176, 248, 252, 190, 150, 27, 140, 62, 178, 34, 107, 61, 124, 148, 140, 61, 41, 57, 35, 191, 254, 165, 169, 61, 98, 127, 166, 189, 117, 92, 246, 190, 243, 170, 219, 62, 139, 34, 218, 189, 180, 164, 161, 188, 138, 68, 136, 188, 70, 78, 174, 61, 121, 207, 112, 62, 255, 37, 178, 62, 11, 162, 3, 62, 163, 23, 75, 62, 215, 200, 185, 62, 191, 148, 180, 62, 154, 73, 8, 190, 186, 236, 2, 189, 203, 232, 130, 189, 86, 146, 22, 62, 50, 252, 112, 190, 237, 117, 144, 190, 204, 109, 8, 190, 208, 109, 4, 191, 117, 21, 4, 61, 44, 166, 96, 61, 87, 114, 139, 61, 8, 91, 92, 189, 204, 132, 196, 61, 86, 162, 252, 189, 92, 113, 111, 62, 130, 62, 82, 62, 62, 32, 45, 190, 250, 150, 0, 61, 26, 216, 234, 189, 165, 34, 85, 61, 66, 3, 56, 61, 220, 24, 68, 62, 107, 30, 253, 61, 58, 236, 32, 191, 42, 10, 182, 61, 11, 21, 136, 191, 144, 181, 252, 188, 189, 126, 132, 62, 233, 70, 50, 188, 86, 81, 145, 190, 51, 77, 182, 62, 202, 176, 208, 190, 16, 11, 93, 191, 112, 13, 243, 190, 165, 68, 66, 62, 3, 83, 174, 62, 123, 198, 210, 190, 172, 30, 49, 62, 175, 136, 53, 190, 226, 215, 100, 62, 104, 137, 167, 191, 2, 32, 172, 188, 132, 211, 103, 188, 206, 254, 160, 61, 38, 6, 219, 60, 63, 106, 47, 62, 244, 72, 175, 62, 213, 81, 159, 191, 87, 63, 105, 61, 76, 241, 192, 189, 32, 66, 22, 62, 73, 101, 21, 190, 27, 170, 239, 61, 191, 182, 41, 62, 18, 109, 219, 61, 165, 147, 57, 190, 14, 113, 111, 190, 46, 39, 205, 189, 115, 56, 53, 62, 67, 138, 157, 62, 93, 4, 129, 62, 74, 170, 189, 188, 18, 210, 151, 190, 218, 37, 216, 62, 191, 242, 10, 62, 46, 88, 213, 189, 82, 223, 252, 189, 23, 191, 88, 190, 162, 66, 31, 190, 54, 130, 180, 189, 123, 53, 139, 61, 101, 147, 206, 190, 166, 0, 46, 62, 27, 51, 14, 62, 63, 128, 129, 187, 22, 14, 74, 62, 72, 52, 175, 62, 77, 117, 219, 61, 57, 166, 247, 62, 121, 48, 103, 62, 18, 73, 94, 189, 230, 182, 1, 190, 70, 240, 79, 190, 68, 26, 71, 190, 121, 15, 69, 191, 252, 86, 240, 188, 171, 102, 130, 190, 93, 223, 246, 61, 210, 201, 18, 191, 88, 150, 52, 62, 114, 166, 7, 191, 93, 59, 110, 190, 62, 144, 20, 191, 135, 202, 140, 190, 62, 238, 11, 62, 106, 103, 21, 189, 29, 233, 159, 62, 254, 35, 159, 62, 166, 130, 41, 62, 189, 164, 28, 190, 11, 202, 122, 61, 215, 9, 44, 192, 86, 16, 24, 61, 201, 66, 22, 63, 185, 3, 183, 62, 99, 117, 4, 190, 111, 131, 110, 62, 115, 74, 90, 191, 73, 12, 190, 188, 226, 120, 65, 188, 249, 205, 236, 189, 98, 185, 161, 62, 226, 239, 249, 189, 135, 139, 39, 62, 26, 97, 255, 62, 17, 58, 76, 62, 71, 75, 102, 189, 21, 37, 131, 190, 179, 39, 201, 61, 192, 48, 208, 61, 244, 10, 146, 189, 194, 251, 60, 190, 70, 75, 193, 60, 195, 169, 240, 188, 115, 244, 155, 61, 214, 59, 111, 60, 113, 111, 145, 189, 130, 217, 24, 190, 222, 0, 241, 61, 122, 166, 4, 185, 180, 246, 153, 189, 232, 164, 215, 189, 43, 52, 37, 61, 124, 221, 245, 189, 237, 246, 36, 190, 114, 55, 69, 190, 140, 66, 222, 60, 90, 237, 70, 190, 166, 42, 135, 189, 209, 42, 247, 61, 142, 111, 46, 190, 200, 63, 195, 189, 160, 94, 16, 190, 210, 126, 39, 59, 86, 101, 10, 62, 205, 23, 0, 190, 62, 216, 70, 188, 17, 162, 33, 190, 53, 177, 26, 191, 3, 37, 51, 62, 153, 195, 46, 190, 4, 99, 46, 190, 249, 25, 242, 187, 203, 0, 88, 189, 211, 147, 228, 189, 42, 10, 190, 61, 129, 113, 52, 190, 14, 200, 195, 190, 14, 223, 169, 62, 86, 40, 177, 62, 135, 237, 96, 190, 203, 87, 66, 62, 184, 54, 216, 189, 105, 5, 132, 62, 117, 49, 211, 190, 28, 48, 229, 190, 183, 61, 138, 189, 202, 69, 28, 60, 83, 84, 81, 61, 23, 80, 153, 189, 146, 21, 13, 62, 223, 121, 126, 190, 24, 195, 214, 188, 48, 85, 81, 189, 70, 97, 162, 190, 20, 244, 34, 61, 54, 42, 39, 62, 68, 205, 137, 189, 118, 85, 15, 61, 30, 157, 247, 61, 135, 249, 81, 62, 136, 165, 33, 62, 38, 150, 16, 188, 230, 81, 75, 191, 69, 85, 77, 62, 195, 61, 16, 191, 79, 226, 5, 62, 249, 106, 98, 62, 206, 125, 216, 188, 174, 49, 118, 190, 41, 138, 210, 61, 115, 98, 119, 190, 138, 191, 199, 191, 198, 6, 37, 191, 130, 247, 37, 62, 152, 225, 149, 62, 101, 118, 104, 190, 251, 11, 161, 62, 142, 149, 10, 190, 243, 163, 73, 189, 22, 170, 82, 191, 193, 237, 120, 60, 61, 40, 54, 190, 128, 99, 15, 62, 109, 156, 118, 61, 180, 0, 8, 62, 205, 108, 92, 62, 84, 28, 76, 191, 135, 34, 236, 186, 143, 241, 76, 62, 254, 10, 204, 60, 147, 189, 115, 190, 64, 231, 136, 61, 141, 237, 195, 189, 116, 201, 163, 188, 15, 230, 21, 61, 115, 41, 134, 60, 71, 218, 71, 61, 36, 19, 200, 189, 14, 133, 163, 60, 235, 132, 137, 189, 137, 5, 248, 61, 223, 231, 220, 187, 31, 206, 17, 188, 249, 31, 6, 190, 135, 109, 142, 189, 198, 102, 124, 59, 224, 30, 249, 189, 226, 41, 55, 190, 97, 11, 85, 189, 64, 71, 245, 61, 222, 50, 109, 60, 238, 170, 228, 61, 45, 148, 153, 61, 194, 241, 168, 189, 67, 27, 183, 189, 243, 108, 29, 61, 34, 224, 45, 190, 243, 215, 28, 62, 33, 239, 119, 188, 106, 123, 78, 187, 194, 164, 55, 61, 154, 110, 45, 190, 128, 109, 47, 190, 246, 58, 206, 189, 93, 202, 211, 61, 78, 121, 193, 190, 69, 77, 5, 62, 252, 237, 117, 191, 77, 149, 97, 62, 103, 225, 11, 61, 24, 36, 3, 190, 25, 21, 165, 189, 216, 126, 28, 191, 77, 182, 205, 190, 238, 120, 130, 61, 47, 38, 131, 62, 239, 254, 147, 61, 155, 19, 20, 189, 159, 207, 191, 190, 20, 204, 89, 188, 245, 123, 103, 190, 8, 63, 11, 62, 49, 4, 171, 190, 40, 74, 98, 62, 87, 185, 91, 190, 9, 242, 238, 61, 91, 226, 19, 190, 45, 19, 65, 190, 250, 66, 59, 189, 156, 241, 151, 61, 157, 37, 150, 62, 101, 131, 138, 58, 29, 105, 14, 191, 29, 165, 218, 190, 104, 123, 180, 60, 154, 190, 84, 60, 29, 171, 193, 61, 240, 127, 0, 62, 159, 219, 6, 62, 54, 145, 39, 190, 228, 161, 106, 187, 12, 84, 140, 189, 44, 255, 177, 189, 202, 25, 20, 62, 75, 198, 226, 61, 6, 232, 142, 189, 193, 144, 249, 188, 210, 124, 147, 189, 31, 153, 25, 190, 34, 241, 45, 62, 123, 118, 161, 188, 15, 208, 136, 60, 219, 114, 1, 189, 222, 233, 0, 190, 153, 102, 23, 62, 23, 191, 48, 190, 135, 21, 73, 189, 213, 69, 186, 61, 176, 102, 223, 189, 14, 221, 52, 190, 192, 115, 192, 189, 10, 140, 51, 189, 13, 186, 153, 61, 26, 221, 177, 61, 42, 11, 52, 190, 59, 113, 147, 189, 43, 60, 7, 190, 242, 143, 58, 189, 203, 109, 154, 188, 219, 186, 255, 61, 97, 82, 196, 189, 23, 147, 144, 62, 24, 124, 215, 190, 204, 103, 193, 61, 94, 183, 46, 62, 63, 196, 71, 62, 30, 6, 130, 190, 38, 95, 151, 62, 164, 204, 27, 190, 228, 105, 13, 191, 77, 3, 62, 191, 89, 148, 121, 62, 170, 70, 223, 62, 143, 178, 66, 189, 168, 106, 137, 61, 10, 247, 34, 62, 29, 193, 192, 61, 144, 5, 141, 191, 69, 182, 225, 189, 8, 193, 156, 189, 74, 86, 228, 61, 153, 233, 35, 61, 62, 199, 53, 61, 154, 82, 14, 63, 61, 236, 123, 191, 115, 220, 195, 61, 199, 233, 70, 62, 43, 114, 33, 62, 194, 143, 183, 189, 123, 252, 194, 190, 145, 204, 123, 191, 75, 176, 255, 190, 27, 72, 43, 62, 120, 167, 111, 190, 190, 193, 153, 62, 190, 223, 194, 191, 89, 161, 210, 190, 100, 244, 192, 191, 197, 168, 177, 61, 35, 119, 86, 63, 28, 69, 122, 190, 188, 17, 26, 62, 253, 228, 31, 61, 110, 191, 203, 62, 125, 9, 22, 63, 138, 187, 172, 62, 129, 86, 39, 191, 89, 235, 170, 62, 93, 153, 180, 61, 109, 235, 223, 61, 191, 142, 185, 189, 63, 12, 216, 61, 40, 219, 29, 191, 55, 87, 50, 191, 95, 39, 251, 190, 100, 19, 28, 190, 222, 210, 193, 61, 201, 255, 22, 190, 208, 208, 77, 188, 180, 225, 44, 190, 94, 44, 14, 62, 121, 93, 30, 62, 184, 14, 212, 62, 103, 183, 133, 190, 191, 241, 73, 190, 57, 27, 142, 188, 148, 189, 102, 190, 167, 96, 89, 62, 105, 129, 150, 62, 228, 90, 43, 190, 31, 20, 182, 60, 242, 128, 94, 62, 74, 160, 23, 63, 117, 200, 1, 188, 197, 16, 74, 62, 172, 245, 174, 190, 66, 12, 118, 190, 115, 19, 69, 190, 65, 140, 160, 61, 36, 129, 221, 61, 88, 140, 75, 62, 28, 132, 139, 62, 188, 184, 254, 61, 121, 160, 158, 61, 178, 233, 146, 190, 8, 49, 223, 61, 42, 161, 49, 190, 183, 78, 146, 189, 138, 20, 18, 62, 168, 68, 138, 189, 87, 180, 98, 189, 182, 83, 79, 190, 2, 6, 154, 190, 33, 164, 121, 191, 41, 141, 210, 62, 15, 158, 249, 190, 135, 130, 232, 189, 157, 160, 176, 190, 3, 103, 41, 62, 186, 190, 16, 62, 53, 38, 217, 62, 89, 78, 129, 189, 15, 94, 12, 190, 80, 197, 18, 190, 193, 187, 216, 62, 165, 97, 84, 62, 5, 45, 113, 62, 72, 71, 148, 190, 243, 84, 180, 61, 19, 164, 172, 190, 254, 60, 157, 190, 28, 29, 141, 189, 101, 200, 6, 191, 86, 254, 36, 62, 51, 157, 129, 61, 81, 238, 69, 62, 110, 9, 196, 190, 110, 222, 217, 62, 224, 231, 133, 61, 163, 24, 46, 62, 88, 94, 40, 188, 195, 138, 137, 189, 26, 51, 2, 191, 219, 30, 84, 190, 144, 88, 8, 61, 23, 48, 226, 61, 200, 226, 95, 62, 185, 47, 69, 191, 132, 106, 69, 189, 121, 55, 107, 191, 65, 187, 24, 62, 48, 93, 6, 191, 225, 239, 229, 188, 188, 229, 184, 60, 72, 150, 86, 191, 120, 69, 128, 191, 109, 210, 170, 62, 198, 44, 155, 60, 112, 135, 77, 61, 44, 61, 128, 61, 238, 163, 30, 191, 237, 255, 131, 62, 57, 188, 147, 60, 77, 181, 163, 62, 124, 252, 75, 62, 16, 27, 118, 62, 189, 200, 45, 190, 43, 86, 23, 62, 70, 67, 43, 190, 30, 184, 191, 190, 206, 166, 178, 189, 172, 81, 75, 62, 66, 86, 32, 62, 138, 107, 39, 190, 172, 32, 41, 191, 83, 75, 184, 190, 192, 140, 129, 61};
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
                alignas(float) const unsigned char memory[] = {189, 201, 22, 62, 170, 8, 249, 60, 214, 189, 55, 190, 158, 108, 220, 61, 243, 197, 211, 188, 83, 42, 166, 189, 234, 38, 128, 62, 85, 144, 246, 188, 244, 254, 48, 190, 113, 120, 190, 189, 175, 14, 177, 61, 23, 43, 22, 61, 81, 213, 27, 62, 148, 25, 95, 189, 177, 149, 250, 188, 132, 2, 203, 61, 231, 225, 57, 190, 106, 147, 51, 62, 199, 35, 10, 188, 49, 218, 173, 60, 79, 71, 13, 62, 62, 91, 144, 61, 62, 87, 15, 62, 220, 71, 140, 62, 139, 118, 4, 190, 137, 241, 199, 189, 99, 144, 176, 58, 84, 94, 32, 62, 186, 180, 218, 61, 202, 149, 82, 190, 30, 249, 14, 190, 44, 106, 65, 61};
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
                alignas(float) const unsigned char memory[] = {229, 236, 173, 190, 160, 231, 33, 60, 189, 25, 209, 62, 58, 130, 81, 63, 231, 59, 108, 61, 253, 202, 2, 191, 243, 28, 43, 63, 170, 100, 25, 191, 15, 30, 16, 190, 159, 210, 204, 190, 147, 44, 4, 190, 86, 107, 149, 190, 91, 143, 39, 191, 23, 84, 254, 190, 158, 249, 10, 191, 89, 95, 193, 62, 138, 107, 127, 191, 88, 83, 9, 62, 209, 17, 7, 191, 253, 145, 255, 61, 137, 159, 182, 190, 89, 122, 15, 62, 154, 249, 131, 61, 29, 102, 216, 190, 14, 136, 141, 188, 93, 189, 93, 62, 56, 206, 4, 190, 233, 192, 191, 190, 194, 17, 20, 191, 11, 119, 153, 190, 6, 8, 234, 62, 104, 42, 172, 62, 144, 138, 181, 189, 9, 244, 232, 61, 195, 204, 184, 189, 203, 200, 47, 189, 224, 228, 248, 189, 213, 67, 9, 191, 20, 72, 42, 190, 34, 34, 136, 62, 4, 122, 154, 188, 99, 90, 179, 61, 15, 77, 197, 189, 66, 155, 204, 189, 192, 250, 141, 190, 109, 218, 213, 62, 38, 194, 60, 190, 108, 6, 179, 61, 49, 128, 217, 62, 31, 137, 89, 190, 79, 144, 8, 190, 82, 196, 47, 62, 181, 187, 167, 189, 32, 115, 31, 62, 46, 200, 170, 190, 121, 4, 162, 189, 83, 177, 91, 189, 234, 224, 26, 190, 66, 97, 20, 190, 118, 73, 204, 189, 171, 22, 66, 189, 122, 139, 163, 190, 248, 69, 38, 61, 54, 242, 23, 190};
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
                alignas(float) const unsigned char memory[] = {136, 73, 165, 186, 171, 18, 130, 189};
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
    alignas(float) const unsigned char memory[] = {42, 29, 142, 63, 1, 92, 191, 190, 193, 225, 117, 191};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 3, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

// NOTE: This code export assumes that the endianness of the target platform is the same as the endianness of the source platform
#include <rl_tools/containers.h>
namespace rl_tools::checkpoint::example::output {
    static_assert(sizeof(unsigned char) == 1);
    alignas(float) const unsigned char memory[] = {29, 244, 93, 63, 126, 47, 168, 191};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 2, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

namespace rl_tools::checkpoint::meta{
   char name[] = "experiments/2024-05-27_19-39-12/b738cd1_zoo_algorithm_environment/sac_pendulum-v1/0066/steps/000000000020000";
   char commit_hash[] = "b738cd18dcbee2b66aa05c642653771cd0e46c8b";
}