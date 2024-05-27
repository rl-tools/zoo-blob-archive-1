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
                alignas(float) const unsigned char memory[] = {122, 182, 229, 62, 158, 210, 18, 191, 181, 159, 182, 62, 183, 128, 247, 62, 229, 177, 107, 191, 75, 169, 150, 62, 239, 160, 45, 191, 92, 61, 128, 191, 234, 20, 227, 189, 75, 211, 2, 190, 9, 45, 159, 190, 64, 89, 38, 63, 157, 221, 236, 62, 136, 181, 113, 191, 133, 85, 30, 191, 64, 21, 36, 63, 248, 147, 230, 62, 213, 104, 247, 62, 11, 121, 100, 62, 152, 245, 183, 190, 235, 1, 157, 188, 52, 178, 144, 62, 52, 191, 176, 62, 236, 238, 211, 190, 242, 114, 1, 191, 37, 175, 1, 191, 189, 14, 250, 62, 238, 33, 121, 191, 157, 43, 0, 62, 248, 109, 179, 188, 39, 146, 243, 190, 66, 169, 82, 63, 118, 8, 17, 63, 138, 151, 32, 190, 60, 16, 113, 188, 59, 172, 164, 62, 170, 199, 35, 62, 206, 85, 18, 188, 144, 176, 28, 187, 168, 63, 148, 61, 131, 209, 50, 191, 155, 51, 252, 61, 95, 156, 118, 190, 171, 128, 65, 63, 99, 30, 215, 61, 154, 250, 230, 62, 200, 47, 158, 191, 39, 239, 124, 190, 183, 219, 155, 189, 223, 23, 47, 63, 230, 93, 253, 190, 245, 29, 19, 191, 12, 173, 231, 61, 142, 40, 222, 189, 173, 179, 77, 191, 187, 44, 107, 63, 102, 137, 213, 61, 213, 126, 158, 190, 73, 165, 184, 190, 61, 150, 3, 63, 166, 232, 64, 63, 224, 187, 89, 63, 40, 150, 190, 62, 99, 170, 59, 191, 80, 113, 117, 191, 167, 188, 108, 189, 127, 216, 102, 63, 68, 147, 41, 63, 187, 86, 64, 62, 18, 12, 41, 191, 85, 118, 126, 191, 174, 147, 144, 190, 143, 57, 7, 62, 165, 113, 47, 191, 89, 84, 147, 62, 141, 230, 159, 190, 148, 76, 165, 62, 161, 114, 61, 191, 5, 134, 200, 62, 52, 89, 140, 191, 193, 218, 118, 190, 224, 207, 171, 62, 13, 32, 171, 63, 61, 163, 203, 62, 76, 176, 18, 191, 196, 89, 248, 189, 13, 181, 4, 63, 64, 7, 175, 189, 161, 108, 216, 190, 133, 16, 250, 62, 145, 252, 16, 191, 87, 232, 29, 191, 156, 155, 143, 62, 87, 129, 128, 62, 81, 121, 168, 190, 167, 205, 246, 62};
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
                alignas(float) const unsigned char memory[] = {167, 188, 10, 191, 29, 85, 171, 62, 124, 225, 149, 62, 212, 42, 62, 190, 143, 174, 29, 191, 158, 246, 136, 62, 212, 134, 15, 191, 175, 151, 215, 61, 190, 137, 10, 61, 156, 82, 84, 62, 255, 232, 207, 190, 45, 139, 6, 191, 88, 211, 134, 190, 70, 148, 164, 61, 86, 197, 35, 63, 243, 196, 136, 61, 249, 127, 146, 189, 129, 56, 28, 62, 176, 111, 148, 62, 110, 187, 87, 190, 114, 42, 89, 191, 102, 184, 60, 190, 77, 37, 253, 62, 25, 10, 155, 62, 212, 170, 73, 62, 160, 117, 3, 191, 49, 175, 129, 62, 29, 131, 188, 190, 43, 86, 19, 63, 225, 84, 153, 190, 213, 84, 122, 190, 23, 103, 30, 190};
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
                alignas(float) const unsigned char memory[] = {35, 224, 198, 189, 153, 22, 242, 61, 122, 103, 130, 189, 66, 133, 136, 61, 76, 139, 104, 61, 169, 120, 139, 189, 118, 166, 151, 188, 81, 2, 135, 187, 168, 36, 130, 60, 137, 17, 11, 189, 75, 51, 65, 190, 254, 162, 41, 188, 253, 160, 50, 62, 84, 7, 76, 190, 59, 12, 100, 61, 113, 59, 182, 189, 80, 199, 24, 189, 191, 10, 43, 189, 116, 22, 253, 188, 53, 219, 179, 189, 158, 85, 34, 62, 63, 247, 226, 61, 54, 105, 208, 189, 156, 49, 120, 61, 125, 205, 13, 62, 66, 182, 65, 189, 62, 236, 150, 189, 232, 252, 138, 61, 240, 168, 198, 189, 6, 237, 9, 62, 111, 37, 40, 190, 21, 140, 26, 190, 193, 182, 221, 59, 94, 110, 1, 190, 114, 72, 224, 189, 21, 29, 218, 60, 185, 109, 235, 189, 166, 96, 46, 189, 125, 66, 70, 61, 198, 90, 51, 189, 248, 148, 252, 61, 239, 110, 159, 61, 168, 2, 255, 189, 51, 150, 145, 189, 189, 197, 218, 189, 58, 214, 3, 189, 133, 208, 173, 189, 16, 227, 28, 190, 253, 164, 231, 189, 152, 149, 11, 189, 13, 150, 1, 61, 94, 214, 86, 189, 144, 47, 13, 189, 15, 254, 25, 62, 71, 220, 143, 189, 231, 18, 21, 61, 166, 128, 236, 60, 229, 25, 232, 61, 134, 70, 184, 189, 234, 182, 169, 61, 125, 108, 6, 190, 41, 16, 194, 61, 202, 154, 46, 190, 243, 44, 210, 61, 237, 64, 34, 61, 173, 154, 42, 62, 25, 121, 32, 191, 245, 188, 49, 190, 29, 117, 12, 190, 36, 18, 151, 190, 251, 62, 167, 59, 127, 44, 25, 62, 225, 73, 127, 189, 173, 181, 131, 190, 38, 24, 250, 189, 71, 87, 184, 190, 229, 190, 253, 189, 223, 215, 96, 190, 97, 222, 53, 62, 66, 116, 197, 62, 99, 170, 229, 61, 150, 171, 24, 62, 233, 244, 48, 190, 107, 11, 174, 190, 114, 54, 157, 191, 231, 17, 83, 191, 113, 236, 98, 62, 75, 217, 143, 190, 169, 158, 246, 187, 105, 169, 43, 62, 224, 26, 254, 61, 214, 120, 51, 191, 165, 149, 2, 62, 118, 197, 1, 191, 64, 247, 53, 191, 160, 175, 161, 190, 50, 155, 56, 62, 99, 166, 149, 188, 112, 157, 20, 191, 129, 2, 38, 190, 7, 195, 48, 191, 245, 75, 14, 61, 47, 108, 151, 189, 108, 87, 131, 62, 242, 195, 9, 60, 158, 251, 50, 191, 62, 58, 17, 190, 62, 23, 30, 190, 148, 213, 114, 61, 172, 127, 86, 189, 181, 174, 218, 188, 149, 236, 166, 190, 165, 224, 75, 62, 128, 71, 24, 62, 151, 23, 17, 62, 127, 118, 159, 61, 241, 111, 97, 189, 166, 104, 59, 62, 242, 218, 4, 61, 166, 172, 209, 190, 163, 14, 38, 62, 33, 31, 77, 62, 137, 230, 50, 61, 111, 230, 13, 190, 98, 41, 238, 60, 116, 231, 123, 60, 132, 186, 206, 189, 187, 249, 239, 60, 3, 187, 20, 190, 29, 78, 143, 189, 141, 17, 143, 61, 22, 75, 1, 190, 153, 232, 172, 189, 72, 39, 42, 61, 79, 113, 29, 59, 177, 240, 188, 61, 132, 172, 179, 189, 98, 103, 151, 61, 202, 152, 135, 188, 40, 145, 78, 189, 186, 129, 11, 190, 30, 253, 123, 190, 126, 76, 18, 62, 22, 75, 184, 62, 106, 87, 22, 190, 59, 164, 38, 190, 249, 235, 128, 61, 181, 140, 151, 189, 61, 68, 149, 190, 219, 239, 30, 61, 253, 211, 171, 187, 119, 196, 120, 62, 234, 118, 75, 61, 10, 170, 51, 190, 181, 131, 200, 62, 176, 19, 31, 191, 65, 99, 235, 61, 177, 18, 57, 190, 66, 233, 169, 190, 32, 198, 0, 190, 183, 4, 66, 62, 161, 22, 243, 61, 154, 6, 85, 61, 32, 219, 74, 61, 6, 68, 189, 189, 32, 72, 48, 61, 208, 99, 150, 189, 1, 32, 131, 62, 52, 82, 89, 190, 159, 43, 29, 62, 12, 83, 21, 190, 223, 189, 153, 61, 70, 28, 206, 189, 199, 114, 43, 189, 21, 34, 142, 60, 118, 255, 197, 61, 212, 46, 228, 188, 88, 54, 46, 62, 199, 22, 60, 62, 26, 0, 171, 189, 60, 12, 81, 191, 149, 169, 159, 62, 202, 150, 51, 61, 184, 173, 8, 190, 72, 179, 140, 62, 251, 207, 62, 62, 71, 14, 26, 62, 241, 232, 105, 191, 81, 222, 188, 189, 185, 169, 255, 188, 191, 43, 36, 62, 75, 43, 146, 61, 143, 174, 177, 189, 255, 39, 253, 61, 80, 148, 167, 190, 168, 142, 234, 61, 205, 125, 134, 62, 221, 94, 56, 189, 27, 17, 2, 190, 8, 87, 178, 59, 214, 39, 191, 61, 10, 247, 83, 190, 173, 254, 57, 61, 200, 191, 160, 187, 249, 222, 212, 188, 168, 1, 105, 60, 102, 31, 242, 189, 162, 77, 169, 62, 153, 210, 190, 62, 153, 18, 176, 189, 231, 27, 173, 190, 28, 74, 167, 62, 72, 64, 65, 191, 56, 13, 170, 190, 105, 200, 80, 61, 185, 244, 205, 190, 5, 11, 27, 188, 230, 245, 57, 190, 165, 147, 0, 62, 225, 253, 129, 191, 172, 39, 46, 62, 162, 8, 91, 190, 8, 151, 18, 190, 203, 95, 37, 190, 95, 2, 52, 190, 136, 152, 67, 62, 198, 183, 40, 191, 225, 75, 10, 62, 201, 93, 12, 62, 205, 163, 137, 190, 15, 238, 107, 62, 126, 53, 141, 188, 209, 253, 1, 189, 12, 158, 200, 61, 193, 52, 177, 61, 238, 250, 201, 189, 166, 46, 195, 61, 50, 100, 251, 61, 201, 229, 129, 189, 178, 27, 217, 62, 149, 177, 132, 62, 112, 172, 98, 188, 98, 163, 60, 189, 157, 137, 194, 62, 159, 196, 74, 190, 11, 134, 47, 191, 247, 168, 57, 189, 152, 82, 135, 190, 9, 201, 64, 190, 5, 161, 122, 190, 127, 119, 201, 188, 253, 162, 79, 190, 132, 22, 210, 61, 225, 165, 27, 190, 108, 102, 217, 190, 25, 199, 29, 190, 215, 4, 92, 190, 233, 18, 45, 190, 252, 146, 219, 187, 238, 134, 182, 190, 84, 83, 160, 190, 12, 217, 57, 62, 207, 165, 183, 60, 193, 239, 190, 60, 68, 20, 72, 61, 141, 147, 111, 62, 143, 129, 26, 62, 244, 170, 191, 60, 201, 164, 35, 61, 202, 176, 153, 188, 147, 42, 128, 62, 16, 221, 139, 190, 31, 255, 177, 61, 107, 162, 161, 61, 227, 151, 69, 62, 231, 200, 45, 190, 41, 254, 176, 190, 48, 102, 241, 62, 124, 98, 228, 61, 112, 151, 37, 190, 235, 44, 42, 61, 55, 124, 48, 188, 156, 136, 129, 190, 218, 145, 78, 191, 145, 55, 189, 60, 246, 34, 80, 62, 182, 122, 64, 62, 199, 8, 71, 190, 229, 222, 75, 62, 110, 96, 81, 61, 53, 72, 84, 190, 191, 83, 15, 62, 111, 89, 143, 187, 195, 72, 225, 60, 54, 89, 28, 60, 7, 102, 142, 61, 58, 31, 145, 59, 106, 127, 253, 189, 195, 141, 117, 190, 43, 5, 44, 190, 166, 80, 49, 62, 18, 43, 199, 189, 134, 69, 81, 188, 43, 232, 149, 61, 176, 5, 226, 188, 63, 208, 2, 190, 214, 218, 223, 190, 194, 157, 78, 60, 228, 222, 96, 191, 172, 111, 131, 62, 22, 24, 0, 62, 216, 1, 141, 189, 167, 217, 13, 60, 148, 128, 214, 61, 220, 175, 146, 62, 80, 159, 210, 191, 92, 163, 41, 190, 204, 180, 248, 61, 72, 71, 196, 62, 191, 134, 51, 61, 146, 179, 145, 190, 255, 177, 170, 190, 87, 5, 179, 62, 236, 124, 113, 191, 10, 162, 221, 190, 125, 33, 78, 62, 225, 41, 119, 189, 178, 63, 122, 62, 207, 220, 175, 61, 60, 154, 153, 62, 18, 84, 222, 190, 65, 144, 65, 190, 224, 229, 36, 61, 209, 142, 137, 190, 105, 253, 140, 62, 86, 21, 140, 190, 248, 29, 239, 189, 155, 253, 161, 62, 255, 9, 76, 62, 163, 232, 239, 190, 79, 162, 223, 62, 84, 255, 37, 63, 60, 175, 109, 62, 166, 227, 109, 62, 248, 243, 14, 61, 120, 244, 189, 60, 254, 247, 145, 190, 100, 110, 41, 190, 212, 230, 139, 190, 126, 14, 168, 190, 140, 191, 140, 62, 212, 48, 122, 190, 69, 211, 5, 62, 72, 16, 180, 189, 38, 34, 251, 190, 15, 143, 73, 189, 233, 174, 194, 190, 118, 185, 88, 62, 192, 183, 134, 189, 7, 143, 161, 62, 76, 231, 117, 59, 140, 118, 241, 189, 31, 156, 204, 190, 73, 59, 234, 188, 47, 200, 37, 189, 28, 7, 83, 189, 29, 242, 138, 61, 214, 63, 132, 191, 237, 43, 154, 60, 159, 13, 117, 61, 20, 126, 161, 190, 79, 153, 204, 189, 30, 139, 12, 62, 195, 189, 79, 62, 232, 62, 192, 61, 99, 155, 87, 189, 221, 37, 0, 62, 6, 218, 10, 62, 191, 146, 222, 190, 92, 78, 93, 190, 115, 207, 149, 188, 245, 190, 178, 187, 113, 235, 124, 62, 153, 87, 76, 62, 226, 62, 199, 62, 13, 201, 165, 60, 145, 14, 175, 190, 66, 137, 163, 189, 180, 243, 170, 61, 166, 136, 142, 190, 86, 68, 214, 61, 44, 114, 48, 190, 207, 1, 0, 62, 75, 108, 50, 62, 156, 204, 139, 62, 212, 94, 120, 190, 170, 254, 211, 60, 209, 35, 80, 188, 93, 241, 135, 189, 130, 54, 168, 62, 163, 172, 121, 62, 232, 5, 48, 62, 132, 41, 171, 62, 67, 27, 23, 62, 15, 65, 96, 61, 145, 112, 82, 191, 227, 204, 60, 188, 59, 158, 52, 191, 191, 163, 220, 190, 219, 82, 167, 190, 53, 214, 81, 62, 70, 51, 164, 190, 171, 88, 109, 62, 96, 248, 165, 190, 146, 66, 36, 191, 21, 157, 63, 190, 125, 34, 144, 188, 192, 44, 12, 62, 88, 253, 145, 190, 254, 233, 35, 62, 87, 84, 208, 190, 92, 240, 152, 59, 25, 34, 199, 61, 67, 196, 82, 62, 182, 252, 242, 189, 207, 190, 205, 59, 22, 109, 52, 190, 157, 219, 58, 62, 246, 181, 41, 62, 2, 83, 108, 190, 226, 145, 143, 62, 235, 21, 43, 191, 244, 5, 98, 61, 220, 133, 234, 61, 76, 68, 37, 61, 174, 171, 166, 60, 197, 186, 80, 189, 177, 151, 37, 188, 28, 170, 173, 62, 131, 222, 15, 60, 206, 108, 75, 60, 182, 68, 132, 60, 45, 166, 125, 190, 244, 47, 184, 190, 35, 210, 2, 62, 110, 152, 207, 61, 33, 150, 59, 62, 8, 133, 166, 186, 169, 66, 6, 190, 124, 157, 144, 190, 150, 18, 184, 60, 63, 61, 29, 190, 22, 162, 161, 190, 162, 197, 235, 61, 132, 200, 234, 61, 141, 121, 146, 190, 178, 57, 243, 189, 240, 106, 133, 190, 188, 171, 241, 61, 40, 106, 161, 186, 136, 172, 207, 59, 250, 60, 208, 189, 225, 1, 226, 61, 168, 189, 66, 191, 126, 160, 99, 62, 4, 128, 211, 189, 26, 45, 93, 61, 58, 145, 1, 190, 9, 36, 62, 62, 10, 144, 5, 190, 110, 206, 35, 62, 74, 92, 143, 190, 107, 38, 153, 190, 171, 58, 16, 189, 9, 22, 90, 191, 214, 115, 132, 62, 69, 15, 232, 189, 232, 45, 144, 188, 82, 112, 215, 189, 37, 244, 91, 190, 234, 96, 214, 61, 116, 40, 194, 61, 184, 0, 171, 61, 219, 143, 127, 61, 49, 71, 51, 190, 138, 136, 118, 62, 129, 124, 89, 189, 15, 251, 149, 189, 240, 189, 25, 189, 149, 215, 107, 190, 190, 236, 168, 188, 193, 240, 223, 59, 40, 187, 163, 189, 132, 74, 49, 190, 210, 134, 87, 189, 129, 55, 97, 62, 129, 81, 17, 62, 34, 177, 23, 62, 6, 162, 189, 189, 161, 47, 31, 62, 108, 2, 152, 190, 82, 30, 10, 61, 237, 214, 58, 62, 250, 223, 5, 62, 204, 150, 7, 190, 102, 26, 98, 188, 201, 230, 202, 62, 37, 218, 159, 189, 210, 72, 12, 62, 240, 50, 39, 189, 112, 5, 181, 188, 203, 234, 147, 189, 123, 10, 50, 190, 226, 224, 168, 189, 49, 29, 172, 60, 5, 39, 173, 189, 183, 253, 83, 189, 137, 239, 236, 189, 197, 171, 200, 188, 120, 218, 46, 190, 226, 174, 73, 61, 15, 57, 223, 189, 81, 6, 186, 60, 38, 227, 46, 62, 174, 84, 115, 189, 238, 251, 143, 188, 143, 44, 40, 62, 209, 242, 14, 190, 79, 148, 66, 189, 16, 52, 20, 60, 59, 169, 232, 189, 195, 144, 16, 190, 234, 217, 140, 189, 2, 235, 10, 190, 130, 139, 5, 188, 27, 1, 84, 60, 35, 205, 85, 61, 208, 165, 236, 61, 151, 40, 60, 189, 233, 100, 192, 61, 247, 95, 7, 189, 52, 152, 66, 189, 221, 86, 26, 190, 192, 99, 210, 60, 65, 58, 110, 62, 138, 178, 46, 190, 78, 48, 46, 190, 2, 201, 92, 189, 196, 201, 168, 190, 76, 126, 207, 62, 219, 83, 134, 61, 188, 6, 131, 57, 166, 195, 249, 188, 155, 227, 147, 61, 77, 136, 151, 190, 145, 139, 12, 190, 90, 213, 158, 189, 158, 99, 145, 61, 66, 225, 13, 62, 121, 240, 236, 190, 182, 204, 4, 62, 132, 136, 5, 61, 136, 227, 30, 60, 250, 227, 131, 190, 32, 185, 146, 62, 193, 234, 241, 61, 231, 75, 139, 62, 84, 161, 201, 189, 160, 253, 160, 189, 254, 238, 17, 62, 79, 97, 202, 190, 160, 129, 75, 189, 150, 203, 161, 61, 249, 98, 248, 61, 139, 151, 196, 189, 232, 216, 143, 62, 45, 13, 17, 62, 153, 202, 179, 189, 160, 33, 117, 189, 147, 221, 104, 189, 133, 65, 22, 62, 50, 170, 2, 61, 184, 232, 42, 62, 137, 173, 53, 190, 186, 169, 148, 188, 62, 2, 221, 189, 60, 147, 23, 61, 206, 147, 91, 61, 133, 176, 6, 62, 217, 46, 224, 189, 86, 128, 225, 60, 202, 153, 219, 60, 64, 226, 6, 62, 30, 147, 222, 189, 162, 94, 0, 189, 167, 252, 113, 61, 10, 255, 35, 62, 49, 34, 169, 61, 248, 164, 71, 189, 72, 160, 87, 188, 141, 168, 249, 187, 183, 47, 145, 189, 166, 13, 151, 189, 31, 33, 205, 189, 75, 158, 10, 190, 12, 3, 30, 189, 203, 53, 81, 61, 166, 252, 149, 60, 1, 94, 166, 189, 143, 36, 5, 62, 49, 201, 40, 62, 124, 19, 241, 61, 221, 206, 14, 61, 179, 88, 40, 189, 52, 74, 91, 188, 78, 91, 203, 189, 184, 211, 145, 62, 95, 25, 242, 61, 248, 56, 197, 61, 254, 166, 231, 189, 200, 96, 193, 189, 198, 8, 137, 62, 112, 154, 213, 58, 236, 89, 202, 62, 85, 22, 108, 62, 207, 56, 127, 190, 122, 222, 162, 60, 184, 31, 192, 62, 46, 170, 221, 190, 9, 175, 113, 190, 209, 239, 177, 189, 126, 133, 170, 190, 170, 155, 55, 190, 140, 98, 119, 190, 163, 97, 77, 62, 102, 32, 249, 190, 23, 126, 247, 188, 97, 79, 59, 190, 252, 147, 153, 60, 183, 109, 149, 190, 23, 63, 152, 190, 120, 9, 151, 62, 172, 166, 128, 62, 96, 241, 13, 61, 98, 180, 90, 190, 42, 236, 25, 190, 242, 244, 243, 60, 153, 222, 69, 189, 54, 177, 66, 62, 140, 38, 237, 62, 1, 130, 64, 61, 23, 91, 51, 190, 120, 168, 252, 184, 5, 44, 93, 62, 215, 17, 103, 62, 213, 38, 4, 62, 231, 81, 133, 189, 61, 87, 227, 61, 255, 24, 216, 62, 72, 22, 131, 62, 172, 90, 57, 191, 251, 77, 170, 61, 233, 30, 25, 190, 163, 163, 208, 58, 224, 223, 145, 189, 46, 176, 88, 190, 194, 177, 125, 62, 154, 62, 62, 191, 95, 176, 164, 61, 213, 25, 11, 190, 56, 19, 51, 190, 79, 220, 64, 189, 155, 25, 17, 190, 155, 18, 17, 190, 120, 204, 62, 190, 126, 48, 23, 61, 62, 126, 12, 190, 162, 39, 237, 61, 159, 124, 157, 189, 64, 156, 12, 61, 190, 114, 164, 189, 18, 68, 235, 189, 95, 149, 18, 61, 227, 189, 167, 189, 191, 145, 37, 60, 102, 27, 4, 190, 213, 129, 142, 60, 21, 188, 129, 62, 252, 159, 71, 190, 203, 124, 246, 61, 247, 89, 183, 61, 6, 217, 28, 190, 251, 121, 119, 189, 88, 101, 73, 190, 53, 5, 171, 62, 238, 140, 102, 61, 193, 116, 200, 189, 250, 149, 119, 61, 17, 189, 82, 61, 148, 17, 118, 61, 38, 84, 253, 61, 210, 74, 5, 190, 15, 116, 249, 190, 108, 170, 44, 61, 26, 66, 42, 190, 132, 113, 212, 190, 137, 121, 114, 62, 235, 92, 192, 190, 101, 24, 3, 191, 133, 101, 41, 189, 50, 99, 47, 62, 233, 34, 167, 190, 229, 133, 24, 62, 20, 3, 165, 62, 171, 113, 31, 191, 168, 59, 113, 61, 128, 45, 63, 189, 83, 72, 147, 62, 133, 165, 106, 190, 177, 248, 55, 191, 149, 10, 201, 190, 224, 20, 216, 60, 31, 160, 101, 61, 222, 24, 198, 190, 220, 212, 66, 190, 192, 77, 164, 62, 93, 28, 133, 190, 95, 190, 96, 190, 153, 153, 180, 61, 102, 151, 236, 190, 35, 168, 3, 191, 18, 146, 25, 191, 106, 181, 155, 61, 178, 16, 208, 61, 246, 79, 204, 62, 23, 123, 75, 62, 88, 137, 204, 189, 203, 28, 9, 62, 47, 104, 146, 61, 92, 18, 247, 61, 191, 235, 195, 188, 84, 99, 2, 61, 236, 134, 186, 61, 224, 155, 19, 190, 185, 161, 45, 190, 70, 75, 37, 62, 113, 71, 46, 62, 222, 138, 18, 190, 5, 107, 31, 60, 32, 41, 37, 190, 57, 231, 208, 189, 147, 43, 236, 59, 6, 17, 10, 190, 235, 237, 49, 190, 52, 39, 155, 188, 245, 34, 245, 189, 6, 112, 157, 187, 110, 95, 16, 190, 173, 244, 179, 189, 196, 131, 181, 188, 182, 238, 225, 189, 168, 108, 185, 189, 135, 249, 56, 57, 185, 191, 11, 62, 0, 161, 18, 190, 148, 31, 164, 59, 68, 80, 13, 61, 33, 159, 167, 60, 199, 200, 7, 62, 1, 168, 203, 62, 90, 74, 157, 190, 196, 220, 44, 190, 251, 48, 163, 62, 116, 5, 42, 190, 47, 247, 0, 62, 98, 152, 193, 187, 95, 109, 18, 61, 254, 104, 2, 189, 6, 234, 73, 189, 2, 92, 135, 190, 192, 221, 71, 189, 230, 115, 174, 62, 140, 54, 4, 191, 132, 64, 9, 63, 183, 43, 14, 62, 239, 199, 241, 189, 71, 121, 173, 190, 199, 108, 64, 190, 146, 113, 187, 190, 113, 8, 117, 190, 4, 213, 173, 189, 89, 19, 232, 61, 79, 120, 58, 62, 37, 142, 25, 190, 124, 139, 24, 62, 68, 0, 218, 190, 173, 95, 188, 188, 181, 98, 67, 189, 78, 116, 94, 58, 142, 188, 6, 190, 169, 75, 22, 190, 19, 99, 57, 187, 103, 201, 135, 190, 30, 132, 157, 61, 199, 103, 220, 188, 234, 110, 34, 62, 237, 79, 15, 62, 255, 47, 205, 188, 241, 26, 215, 61, 150, 221, 172, 189, 244, 158, 251, 189, 49, 51, 148, 187, 86, 104, 223, 189, 244, 175, 188, 60, 31, 28, 238, 61, 209, 102, 97, 62, 73, 237, 135, 189, 209, 55, 32, 61, 90, 250, 25, 62, 73, 253, 150, 189, 227, 129, 213, 189, 2, 167, 178, 190, 209, 239, 220, 61, 247, 227, 3, 61, 70, 120, 153, 189, 5, 134, 178, 60, 184, 5, 47, 62, 200, 6, 35, 189, 74, 227, 254, 61, 132, 1, 204, 189, 182, 80, 36, 191, 164, 108, 148, 60, 215, 129, 2, 63, 145, 238, 188, 61, 5, 64, 162, 60, 131, 223, 189, 189, 194, 216, 19, 190, 81, 64, 135, 62, 138, 212, 255, 61, 86, 29, 25, 62, 160, 42, 155, 189, 167, 61, 9, 62, 119, 62, 148, 190, 188, 50, 134, 62, 162, 53, 33, 62, 55, 88, 149, 61, 17, 125, 18, 62, 122, 1, 69, 190, 132, 40, 109, 190, 79, 44, 132, 62, 240, 121, 141, 189, 23, 159, 33, 191, 126, 207, 207, 62, 137, 235, 139, 61, 244, 44, 6, 62, 36, 148, 132, 62, 61, 100, 85, 62, 102, 38, 65, 61, 144, 63, 141, 189, 94, 76, 2, 191, 80, 197, 243, 189, 164, 213, 1, 62, 188, 128, 10, 62, 212, 90, 150, 62, 221, 44, 143, 61, 212, 188, 57, 61, 115, 57, 121, 62, 217, 100, 141, 188, 1, 224, 130, 59, 32, 77, 172, 61, 136, 109, 15, 62, 77, 173, 76, 188, 77, 174, 1, 189, 44, 252, 85, 61, 95, 212, 8, 62, 182, 187, 203, 61, 252, 147, 5, 190, 13, 243, 83, 189, 255, 194, 219, 61, 12, 246, 165, 62, 130, 55, 3, 190, 144, 158, 52, 189, 144, 215, 71, 62, 50, 49, 22, 61, 127, 32, 141, 190, 64, 52, 173, 189, 146, 38, 135, 62, 6, 184, 132, 189, 252, 131, 142, 189, 243, 236, 58, 190, 40, 189, 84, 62, 72, 42, 9, 61, 100, 47, 7, 62, 194, 5, 209, 189, 220, 122, 55, 190, 106, 91, 45, 190, 75, 53, 12, 190, 213, 232, 46, 62, 210, 165, 50, 62, 157, 156, 128, 189, 19, 62, 25, 191, 196, 186, 242, 60, 1, 148, 33, 62, 54, 134, 161, 190, 2, 34, 151, 62, 209, 170, 152, 62, 173, 158, 15, 62, 215, 54, 50, 189, 235, 214, 164, 61, 22, 196, 119, 62, 72, 131, 232, 61, 137, 233, 207, 62, 201, 104, 142, 62, 239, 150, 142, 62, 240, 121, 181, 62, 39, 140, 159, 62, 219, 228, 51, 191, 7, 120, 119, 188, 250, 106, 24, 189, 82, 83, 218, 61, 186, 35, 126, 190, 196, 11, 184, 189, 200, 93, 2, 62, 140, 173, 128, 191, 39, 252, 142, 62, 136, 146, 52, 190, 58, 72, 81, 190, 215, 27, 183, 190, 220, 29, 39, 63, 127, 235, 154, 190, 229, 11, 168, 62, 175, 174, 206, 190, 238, 221, 185, 190, 160, 31, 182, 62, 80, 126, 23, 190, 18, 10, 222, 61, 79, 217, 109, 190, 234, 100, 186, 62, 17, 158, 76, 191, 192, 80, 162, 188, 209, 156, 126, 61, 64, 225, 31, 190, 122, 244, 53, 62, 71, 65, 163, 190, 209, 232, 233, 189, 75, 209, 128, 62, 170, 234, 108, 61, 111, 9, 1, 191, 182, 81, 72, 60, 193, 236, 181, 62, 61, 185, 208, 62, 24, 30, 152, 62, 91, 4, 162, 61, 187, 77, 211, 61, 254, 89, 186, 190, 1, 19, 154, 190, 115, 42, 10, 190, 162, 27, 237, 61, 45, 15, 65, 61, 191, 183, 157, 62, 55, 186, 201, 62, 170, 192, 52, 189, 215, 57, 61, 191, 57, 138, 20, 188, 10, 123, 236, 190, 28, 124, 52, 62, 11, 160, 255, 189, 94, 174, 65, 62, 248, 145, 218, 60, 3, 118, 152, 190, 27, 50, 46, 189, 68, 222, 75, 62, 187, 85, 40, 190, 20, 232, 193, 59, 136, 35, 72, 62, 231, 182, 86, 191, 141, 138, 14, 62, 90, 197, 122, 189, 20, 232, 130, 188, 199, 32, 131, 189, 75, 180, 18, 62, 138, 119, 137, 190, 38, 106, 44, 62, 52, 41, 104, 190, 215, 155, 82, 189, 79, 169, 21, 62, 216, 119, 15, 190, 241, 86, 186, 59, 174, 199, 131, 190, 239, 73, 157, 60, 77, 73, 69, 62, 60, 79, 90, 62, 181, 157, 135, 190, 164, 59, 68, 190, 67, 46, 192, 62, 129, 221, 159, 190, 180, 43, 189, 190, 137, 29, 155, 189, 50, 248, 54, 61, 58, 124, 84, 62, 238, 7, 125, 62, 154, 17, 192, 62, 213, 243, 33, 191, 248, 174, 216, 187, 121, 40, 25, 62, 90, 239, 116, 62, 111, 199, 15, 62, 2, 236, 196, 190, 249, 252, 152, 60, 234, 18, 20, 61, 28, 244, 56, 190, 82, 160, 137, 190, 205, 168, 80, 191, 22, 166, 58, 63, 249, 230, 147, 61, 112, 248, 83, 62, 197, 122, 237, 61, 192, 185, 102, 59, 219, 221, 137, 190, 248, 238, 158, 190, 87, 77, 103, 189, 93, 138, 135, 62, 4, 146, 247, 62, 196, 189, 232, 61};
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
                alignas(float) const unsigned char memory[] = {184, 11, 19, 190, 37, 102, 104, 189, 251, 146, 149, 189, 238, 46, 29, 62, 70, 115, 174, 62, 217, 232, 243, 61, 193, 34, 104, 62, 224, 143, 51, 189, 193, 131, 131, 62, 226, 86, 53, 62, 176, 202, 154, 61, 120, 241, 209, 61, 14, 171, 82, 62, 161, 7, 186, 61, 66, 78, 40, 62, 17, 18, 112, 62, 242, 15, 107, 189, 117, 101, 199, 188, 253, 171, 37, 190, 147, 227, 118, 62, 55, 16, 150, 62, 61, 116, 86, 62, 42, 161, 13, 190, 190, 97, 8, 190, 80, 89, 253, 189, 111, 105, 39, 62, 62, 106, 218, 61, 247, 87, 18, 62, 131, 110, 137, 62, 227, 172, 27, 62, 141, 137, 254, 60, 102, 146, 197, 61};
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
                alignas(float) const unsigned char memory[] = {183, 186, 173, 61, 173, 157, 192, 189, 88, 68, 23, 63, 225, 137, 197, 189, 157, 76, 67, 189, 25, 22, 126, 62, 130, 240, 41, 63, 4, 116, 0, 62, 249, 54, 227, 190, 230, 196, 145, 62, 128, 67, 75, 191, 14, 211, 12, 191, 222, 131, 67, 63, 113, 32, 106, 190, 135, 83, 13, 63, 250, 238, 237, 186, 249, 191, 84, 189, 58, 36, 169, 190, 134, 30, 134, 189, 169, 61, 195, 62, 138, 149, 20, 63, 59, 83, 75, 61, 206, 204, 127, 191, 116, 145, 36, 189, 245, 38, 136, 190, 144, 74, 185, 60, 192, 91, 142, 190, 54, 200, 133, 61, 168, 178, 71, 63, 92, 38, 93, 191, 18, 155, 7, 191, 185, 134, 35, 191, 85, 100, 161, 189, 30, 163, 23, 187, 248, 212, 201, 190, 93, 41, 58, 190, 196, 147, 196, 190, 22, 43, 102, 190, 28, 5, 104, 61, 55, 34, 199, 62, 68, 238, 200, 190, 180, 84, 97, 190, 145, 216, 35, 62, 66, 210, 141, 62, 140, 46, 7, 63, 152, 82, 130, 190, 197, 235, 130, 62, 167, 85, 101, 190, 161, 54, 219, 188, 145, 126, 99, 62, 180, 238, 239, 60, 49, 19, 74, 61, 210, 177, 7, 61, 99, 38, 55, 190, 29, 9, 248, 61, 216, 164, 206, 189, 195, 78, 59, 63, 12, 114, 26, 190, 189, 86, 138, 190, 252, 3, 70, 190, 214, 127, 31, 62, 189, 33, 83, 60, 63, 142, 41, 62, 198, 254, 141, 62};
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
                alignas(float) const unsigned char memory[] = {134, 127, 221, 189, 127, 2, 129, 190};
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
    alignas(float) const unsigned char memory[] = {229, 53, 29, 191, 237, 41, 164, 63, 214, 219, 6, 191};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 3, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

// NOTE: This code export assumes that the endianness of the target platform is the same as the endianness of the source platform
#include <rl_tools/containers.h>
namespace rl_tools::checkpoint::example::output {
    static_assert(sizeof(unsigned char) == 1);
    alignas(float) const unsigned char memory[] = {188, 65, 190, 61, 128, 153, 54, 59};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 2, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

namespace rl_tools::checkpoint::meta{
   char name[] = "experiments/2024-05-27_19-39-12/b738cd1_zoo_algorithm_environment/sac_pendulum-v1/0044/steps/000000000012000";
   char commit_hash[] = "b738cd18dcbee2b66aa05c642653771cd0e46c8b";
}