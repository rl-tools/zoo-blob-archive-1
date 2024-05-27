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
                alignas(float) const unsigned char memory[] = {60, 157, 71, 63, 238, 174, 5, 63, 16, 4, 145, 62, 12, 118, 27, 63, 68, 73, 128, 191, 0, 181, 119, 62, 74, 190, 87, 62, 196, 73, 245, 62, 170, 201, 146, 62, 41, 68, 245, 189, 65, 221, 165, 190, 19, 39, 160, 190, 226, 54, 35, 62, 22, 210, 88, 63, 15, 62, 10, 62, 173, 37, 66, 191, 66, 67, 222, 190, 181, 247, 63, 190, 121, 139, 98, 62, 200, 87, 159, 63, 38, 186, 80, 63, 55, 149, 29, 63, 72, 177, 97, 63, 99, 12, 39, 191, 153, 61, 75, 62, 212, 197, 191, 63, 150, 107, 58, 63, 31, 23, 25, 63, 133, 1, 117, 62, 129, 64, 181, 189, 139, 70, 74, 63, 44, 254, 39, 189, 151, 126, 135, 188, 136, 9, 69, 63, 64, 169, 87, 191, 63, 84, 191, 190, 164, 69, 19, 191, 127, 98, 170, 191, 136, 27, 37, 191, 142, 185, 183, 190, 145, 83, 126, 191, 60, 97, 25, 189, 163, 22, 131, 190, 104, 126, 131, 63, 90, 26, 75, 191, 123, 92, 62, 63, 177, 146, 45, 62, 136, 70, 86, 189, 58, 123, 141, 190, 120, 213, 17, 63, 224, 85, 115, 191, 245, 66, 83, 63, 247, 216, 2, 63, 77, 81, 96, 62, 74, 98, 22, 191, 120, 136, 17, 191, 202, 182, 223, 190, 118, 28, 9, 191, 246, 70, 82, 191, 180, 77, 163, 62, 122, 219, 39, 191, 211, 59, 65, 191, 42, 58, 144, 189, 239, 207, 35, 190, 94, 56, 28, 190, 94, 8, 56, 61, 246, 254, 27, 62, 185, 238, 252, 190, 62, 189, 76, 190, 70, 9, 103, 62, 45, 9, 224, 62, 37, 202, 84, 62, 108, 113, 151, 61, 76, 96, 124, 191, 90, 214, 68, 63, 155, 182, 85, 190, 110, 156, 13, 61, 42, 186, 201, 62, 101, 157, 62, 190, 243, 39, 94, 62, 127, 190, 1, 191, 8, 173, 16, 191, 210, 133, 19, 191, 113, 117, 54, 189, 4, 134, 97, 62, 43, 37, 154, 62, 13, 146, 15, 189, 153, 135, 224, 190, 228, 173, 83, 63, 1, 169, 57, 62, 181, 181, 114, 190, 20, 175, 21, 191, 156, 110, 204, 62, 106, 132, 75, 190, 107, 7, 142, 61, 162, 195, 140, 191};
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
                alignas(float) const unsigned char memory[] = {57, 204, 19, 191, 82, 24, 224, 61, 93, 203, 3, 189, 224, 199, 169, 61, 87, 21, 35, 63, 212, 181, 58, 63, 95, 146, 246, 188, 131, 49, 235, 62, 15, 160, 148, 189, 219, 95, 143, 61, 168, 16, 236, 62, 130, 241, 9, 189, 181, 38, 114, 188, 28, 138, 209, 62, 115, 117, 8, 190, 174, 82, 216, 62, 36, 185, 56, 191, 91, 89, 195, 190, 206, 178, 96, 61, 95, 247, 147, 190, 138, 79, 106, 62, 162, 118, 17, 191, 176, 108, 143, 62, 148, 159, 148, 189, 40, 140, 191, 189, 13, 77, 75, 63, 71, 65, 166, 190, 99, 200, 17, 63, 69, 190, 5, 191, 207, 152, 227, 62, 102, 167, 196, 190, 181, 50, 242, 62};
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
                alignas(float) const unsigned char memory[] = {202, 147, 153, 190, 119, 76, 153, 190, 52, 142, 165, 60, 134, 91, 120, 189, 153, 241, 38, 62, 39, 7, 143, 62, 203, 251, 211, 189, 76, 232, 206, 190, 243, 186, 8, 190, 185, 122, 49, 191, 152, 203, 88, 62, 102, 98, 82, 191, 121, 213, 68, 190, 71, 39, 121, 60, 10, 44, 182, 62, 54, 173, 139, 62, 149, 164, 2, 62, 27, 225, 43, 188, 194, 117, 93, 62, 238, 16, 174, 62, 55, 40, 54, 62, 138, 129, 11, 190, 37, 165, 233, 60, 104, 66, 31, 190, 18, 166, 74, 190, 180, 128, 207, 188, 49, 242, 15, 191, 236, 47, 237, 61, 100, 43, 29, 61, 137, 19, 37, 62, 237, 183, 90, 62, 51, 160, 66, 62, 129, 129, 217, 190, 174, 126, 152, 62, 43, 129, 18, 60, 2, 58, 20, 190, 8, 63, 181, 59, 93, 69, 66, 188, 3, 171, 201, 61, 2, 152, 86, 62, 122, 227, 123, 62, 81, 103, 8, 62, 139, 219, 103, 190, 59, 248, 203, 62, 6, 66, 157, 61, 178, 34, 33, 186, 178, 43, 19, 189, 98, 108, 214, 189, 161, 232, 85, 190, 19, 204, 145, 190, 8, 175, 137, 189, 80, 168, 8, 191, 158, 25, 148, 189, 13, 56, 250, 189, 1, 103, 81, 60, 239, 222, 233, 189, 151, 46, 194, 61, 137, 29, 5, 62, 16, 129, 138, 62, 236, 61, 164, 61, 165, 223, 251, 60, 192, 196, 56, 60, 3, 178, 171, 190, 160, 193, 92, 189, 112, 158, 160, 61, 22, 248, 237, 62, 144, 233, 14, 61, 57, 192, 24, 189, 83, 252, 126, 191, 116, 78, 10, 190, 42, 222, 145, 190, 177, 30, 102, 189, 78, 176, 18, 62, 39, 204, 248, 190, 211, 185, 86, 191, 78, 70, 158, 61, 229, 54, 2, 62, 149, 122, 116, 62, 139, 130, 184, 61, 234, 129, 183, 190, 90, 65, 70, 62, 188, 231, 76, 62, 200, 27, 94, 62, 159, 0, 186, 61, 87, 138, 149, 62, 230, 78, 85, 61, 241, 0, 35, 190, 194, 12, 32, 61, 174, 134, 71, 62, 73, 252, 95, 189, 135, 129, 108, 61, 74, 28, 139, 189, 192, 121, 134, 189, 161, 207, 175, 191, 129, 80, 161, 189, 70, 46, 250, 61, 132, 207, 3, 190, 253, 12, 186, 62, 70, 197, 88, 190, 108, 150, 5, 191, 184, 250, 241, 61, 161, 34, 131, 61, 143, 245, 28, 62, 49, 228, 225, 190, 129, 25, 84, 62, 136, 240, 170, 62, 144, 148, 200, 190, 38, 109, 186, 61, 42, 90, 167, 191, 144, 91, 61, 61, 86, 52, 143, 191, 229, 176, 3, 191, 74, 74, 162, 191, 238, 185, 42, 190, 143, 221, 216, 61, 81, 79, 170, 190, 241, 100, 162, 61, 232, 179, 14, 189, 25, 73, 52, 190, 31, 92, 21, 190, 1, 37, 194, 62, 249, 17, 137, 62, 115, 72, 250, 189, 41, 119, 148, 62, 161, 114, 164, 61, 59, 253, 241, 61, 168, 252, 121, 187, 77, 52, 216, 191, 187, 188, 7, 60, 157, 161, 166, 189, 139, 28, 56, 188, 58, 173, 225, 189, 242, 143, 252, 189, 177, 4, 152, 189, 195, 154, 202, 189, 247, 161, 199, 188, 148, 49, 61, 190, 26, 88, 200, 61, 219, 143, 144, 188, 0, 123, 15, 190, 35, 158, 42, 190, 125, 185, 116, 189, 74, 8, 42, 190, 217, 26, 43, 190, 106, 193, 219, 59, 101, 221, 141, 189, 79, 2, 12, 62, 40, 173, 28, 62, 107, 83, 158, 61, 152, 4, 255, 61, 204, 78, 252, 61, 219, 133, 92, 189, 81, 248, 255, 61, 31, 12, 24, 190, 226, 85, 126, 61, 110, 25, 199, 189, 219, 35, 254, 61, 91, 26, 47, 188, 71, 96, 103, 59, 2, 45, 223, 189, 93, 147, 32, 190, 60, 244, 119, 62, 180, 204, 242, 61, 84, 240, 94, 190, 85, 161, 165, 61, 131, 39, 68, 191, 111, 41, 164, 61, 247, 144, 38, 62, 85, 100, 32, 62, 14, 219, 141, 190, 124, 113, 212, 62, 35, 85, 82, 189, 252, 154, 14, 191, 205, 3, 240, 190, 204, 19, 136, 61, 54, 98, 191, 62, 114, 249, 57, 190, 21, 8, 177, 189, 66, 76, 253, 190, 23, 173, 145, 61, 32, 252, 128, 191, 19, 69, 14, 190, 176, 61, 41, 62, 57, 27, 50, 62, 114, 82, 161, 61, 225, 88, 179, 61, 130, 68, 97, 62, 225, 166, 57, 191, 138, 143, 248, 188, 237, 133, 12, 190, 244, 119, 204, 189, 231, 77, 0, 190, 134, 0, 222, 190, 246, 124, 204, 62, 100, 152, 114, 189, 143, 151, 141, 190, 7, 50, 139, 62, 144, 240, 24, 189, 239, 248, 159, 62, 225, 59, 25, 63, 68, 148, 149, 62, 44, 105, 223, 62, 223, 232, 249, 61, 39, 11, 251, 62, 212, 60, 172, 191, 80, 186, 16, 190, 107, 25, 11, 191, 43, 143, 105, 62, 152, 227, 80, 191, 148, 220, 213, 190, 10, 108, 81, 190, 165, 19, 183, 190, 151, 121, 102, 62, 84, 1, 15, 190, 122, 173, 137, 62, 140, 138, 145, 189, 69, 187, 137, 61, 205, 74, 103, 62, 104, 27, 135, 189, 252, 247, 222, 189, 65, 185, 19, 190, 244, 53, 77, 62, 210, 198, 217, 190, 154, 245, 47, 191, 233, 64, 83, 190, 29, 78, 185, 190, 149, 122, 107, 190, 109, 238, 204, 190, 254, 12, 10, 62, 167, 14, 93, 62, 46, 56, 199, 60, 145, 97, 247, 62, 23, 15, 53, 189, 171, 232, 17, 191, 22, 184, 248, 189, 72, 244, 218, 189, 195, 185, 15, 62, 137, 36, 106, 61, 27, 60, 111, 62, 25, 169, 238, 61, 149, 135, 132, 190, 78, 109, 18, 190, 239, 146, 170, 190, 4, 43, 197, 190, 78, 247, 11, 62, 140, 101, 31, 61, 37, 159, 12, 190, 125, 250, 88, 190, 13, 52, 4, 191, 128, 208, 3, 190, 108, 131, 250, 189, 166, 148, 117, 61, 104, 98, 26, 62, 60, 219, 207, 61, 65, 36, 239, 190, 17, 192, 182, 190, 171, 100, 189, 60, 236, 205, 81, 190, 127, 42, 26, 62, 224, 112, 35, 190, 17, 141, 244, 188, 212, 28, 18, 190, 173, 137, 90, 61, 71, 49, 158, 61, 232, 19, 144, 62, 250, 26, 14, 191, 55, 104, 15, 190, 129, 123, 5, 191, 22, 227, 110, 188, 224, 115, 60, 190, 249, 40, 14, 62, 72, 111, 99, 61, 92, 105, 133, 59, 115, 158, 74, 62, 171, 78, 31, 61, 108, 12, 150, 62, 128, 130, 248, 57, 239, 71, 46, 62, 115, 117, 144, 190, 136, 156, 0, 62, 118, 63, 226, 61, 149, 5, 105, 61, 63, 120, 24, 62, 2, 161, 66, 190, 63, 8, 53, 190, 8, 36, 35, 62, 121, 73, 99, 62, 87, 42, 134, 61, 209, 50, 88, 188, 179, 9, 168, 62, 118, 248, 16, 60, 131, 24, 30, 191, 176, 178, 175, 61, 17, 124, 63, 190, 239, 237, 155, 62, 238, 42, 211, 62, 2, 214, 24, 62, 35, 123, 157, 190, 156, 22, 75, 190, 133, 102, 211, 62, 120, 12, 100, 190, 127, 32, 124, 188, 20, 181, 146, 62, 66, 95, 145, 190, 120, 57, 52, 188, 162, 77, 32, 62, 135, 167, 185, 190, 106, 168, 120, 61, 135, 102, 27, 190, 28, 164, 177, 61, 234, 27, 192, 190, 24, 160, 173, 189, 160, 129, 128, 62, 211, 18, 120, 61, 143, 23, 19, 62, 20, 12, 168, 61, 218, 223, 21, 62, 78, 135, 136, 61, 18, 40, 20, 189, 47, 152, 85, 190, 118, 72, 201, 188, 172, 82, 232, 188, 208, 230, 249, 189, 155, 105, 160, 189, 112, 39, 246, 61, 209, 189, 110, 188, 40, 20, 159, 189, 23, 247, 25, 188, 28, 60, 37, 61, 114, 240, 219, 61, 71, 4, 42, 190, 34, 190, 98, 60, 254, 230, 87, 60, 112, 146, 130, 189, 114, 129, 49, 61, 219, 116, 25, 190, 19, 236, 180, 61, 212, 213, 33, 60, 231, 210, 72, 190, 84, 62, 0, 190, 7, 94, 79, 190, 111, 157, 156, 189, 116, 110, 8, 190, 110, 105, 58, 62, 151, 225, 41, 189, 76, 57, 19, 190, 99, 36, 187, 188, 204, 151, 193, 187, 84, 141, 188, 61, 248, 67, 46, 190, 9, 127, 49, 60, 172, 88, 129, 189, 233, 59, 147, 190, 211, 41, 178, 61, 161, 128, 73, 61, 73, 248, 83, 190, 204, 12, 144, 60, 74, 243, 44, 62, 218, 155, 50, 62, 149, 97, 61, 62, 13, 185, 97, 61, 147, 92, 19, 190, 25, 9, 2, 191, 57, 239, 53, 190, 235, 22, 118, 190, 213, 40, 168, 190, 19, 185, 254, 61, 89, 194, 9, 190, 42, 161, 212, 190, 84, 132, 57, 189, 23, 171, 194, 190, 238, 66, 92, 62, 23, 171, 58, 190, 39, 38, 245, 61, 30, 206, 34, 191, 6, 240, 207, 189, 175, 224, 54, 62, 18, 51, 72, 61, 86, 54, 26, 62, 89, 88, 241, 189, 57, 130, 253, 60, 99, 253, 88, 62, 209, 213, 67, 62, 155, 123, 88, 190, 93, 145, 133, 190, 24, 107, 231, 190, 217, 214, 39, 190, 108, 208, 193, 61, 57, 27, 123, 62, 86, 99, 6, 61, 164, 44, 5, 60, 125, 91, 66, 62, 196, 85, 119, 62, 150, 50, 27, 191, 90, 4, 108, 190, 88, 71, 38, 191, 27, 139, 205, 190, 219, 255, 186, 190, 255, 91, 20, 62, 93, 239, 231, 61, 94, 167, 143, 190, 120, 51, 133, 189, 210, 173, 177, 189, 85, 216, 104, 191, 231, 31, 168, 190, 122, 217, 184, 61, 113, 63, 52, 189, 56, 181, 137, 60, 15, 58, 184, 189, 103, 195, 2, 190, 105, 62, 16, 62, 210, 179, 71, 191, 202, 248, 56, 61, 127, 251, 55, 62, 224, 6, 1, 191, 87, 65, 4, 190, 169, 223, 66, 63, 205, 222, 46, 190, 8, 217, 143, 62, 225, 91, 188, 190, 229, 62, 148, 61, 251, 117, 205, 190, 109, 206, 16, 190, 78, 168, 150, 62, 221, 21, 50, 62, 219, 179, 139, 190, 150, 48, 64, 62, 123, 146, 96, 190, 137, 140, 59, 190, 143, 247, 150, 190, 14, 20, 95, 62, 165, 112, 157, 62, 23, 228, 176, 190, 89, 239, 59, 63, 239, 97, 247, 188, 169, 151, 67, 190, 174, 88, 160, 190, 48, 71, 153, 189, 179, 38, 249, 189, 209, 7, 83, 62, 75, 50, 234, 60, 227, 75, 131, 60, 225, 196, 62, 61, 42, 21, 147, 190, 174, 175, 128, 189, 203, 183, 231, 187, 131, 135, 214, 60, 123, 230, 132, 190, 9, 22, 82, 190, 53, 203, 47, 191, 239, 28, 3, 59, 182, 10, 159, 61, 214, 95, 44, 62, 7, 76, 65, 62, 127, 249, 112, 191, 42, 172, 169, 190, 217, 247, 43, 191, 161, 128, 114, 190, 171, 177, 225, 62, 134, 34, 248, 190, 142, 206, 153, 60, 99, 98, 121, 189, 17, 180, 154, 62, 54, 186, 4, 62, 61, 216, 189, 62, 206, 255, 197, 189, 192, 178, 146, 62, 237, 172, 142, 62, 88, 244, 192, 188, 49, 59, 130, 190, 41, 254, 216, 61, 223, 86, 77, 62, 102, 129, 31, 191, 150, 105, 44, 187, 132, 87, 175, 190, 59, 10, 156, 188, 154, 169, 1, 189, 203, 51, 79, 62, 22, 233, 39, 190, 141, 141, 138, 62, 70, 173, 59, 191, 253, 170, 111, 190, 155, 159, 176, 190, 40, 16, 157, 62, 150, 28, 49, 62, 116, 165, 26, 187, 74, 239, 127, 189, 190, 132, 184, 62, 189, 213, 146, 62, 118, 31, 26, 62, 185, 117, 204, 190, 165, 87, 131, 61, 46, 157, 240, 61, 33, 35, 131, 190, 230, 130, 201, 62, 99, 253, 9, 190, 151, 21, 203, 62, 101, 135, 7, 191, 46, 209, 137, 61, 51, 103, 1, 63, 107, 196, 130, 190, 75, 6, 64, 61, 169, 230, 206, 61, 162, 61, 82, 190, 202, 153, 166, 190, 241, 28, 37, 62, 169, 207, 8, 190, 171, 249, 47, 190, 35, 2, 132, 61, 231, 234, 212, 61, 81, 114, 54, 190, 215, 41, 75, 62, 61, 230, 158, 188, 200, 11, 32, 62, 164, 143, 147, 60, 193, 233, 252, 189, 44, 177, 99, 191, 179, 93, 92, 190, 172, 99, 42, 62, 14, 235, 227, 61, 217, 114, 68, 61, 56, 67, 172, 188, 167, 174, 25, 62, 137, 26, 227, 62, 57, 144, 231, 61, 83, 34, 246, 61, 72, 158, 180, 188, 39, 177, 170, 61, 211, 88, 110, 190, 63, 144, 133, 190, 191, 157, 58, 189, 138, 31, 116, 61, 197, 52, 3, 190, 145, 113, 208, 61, 26, 39, 59, 190, 176, 132, 162, 188, 143, 47, 187, 61, 228, 21, 235, 190, 192, 93, 131, 62, 179, 17, 35, 62, 124, 148, 140, 61, 101, 80, 12, 191, 129, 209, 160, 187, 253, 162, 136, 189, 231, 117, 219, 190, 164, 102, 211, 62, 184, 166, 3, 190, 251, 72, 161, 188, 182, 46, 140, 59, 153, 37, 140, 61, 203, 98, 103, 62, 187, 58, 182, 62, 25, 120, 45, 62, 7, 13, 128, 62, 185, 200, 187, 62, 40, 61, 180, 62, 145, 24, 183, 189, 81, 65, 86, 189, 176, 101, 174, 189, 30, 69, 41, 62, 138, 173, 109, 190, 72, 120, 159, 190, 64, 231, 30, 190, 90, 219, 11, 191, 135, 4, 8, 188, 44, 166, 96, 61, 152, 162, 58, 61, 205, 214, 195, 189, 247, 20, 185, 61, 217, 161, 196, 189, 157, 189, 132, 62, 8, 136, 64, 62, 62, 32, 45, 190, 72, 222, 143, 61, 182, 246, 27, 190, 63, 130, 61, 61, 35, 1, 167, 58, 31, 234, 229, 61, 172, 96, 19, 62, 220, 188, 236, 189, 146, 211, 195, 61, 104, 222, 22, 191, 124, 33, 25, 61, 198, 165, 141, 62, 143, 131, 56, 61, 19, 59, 155, 190, 68, 87, 172, 62, 160, 251, 187, 190, 182, 124, 133, 188, 155, 170, 213, 190, 230, 168, 65, 62, 0, 188, 165, 62, 44, 214, 196, 190, 31, 36, 30, 62, 156, 47, 106, 190, 46, 54, 26, 62, 34, 220, 135, 191, 2, 32, 172, 188, 205, 244, 118, 61, 127, 5, 244, 61, 227, 40, 233, 188, 244, 83, 22, 62, 61, 150, 133, 62, 245, 62, 75, 191, 87, 63, 105, 61, 196, 224, 19, 60, 224, 143, 181, 61, 161, 227, 165, 189, 233, 9, 43, 62, 143, 96, 52, 62, 252, 91, 147, 61, 217, 202, 46, 190, 103, 143, 131, 190, 110, 59, 148, 189, 248, 158, 244, 61, 118, 127, 172, 62, 92, 122, 59, 62, 92, 199, 105, 188, 106, 153, 160, 190, 121, 108, 198, 62, 169, 72, 6, 62, 212, 235, 138, 189, 229, 131, 245, 189, 141, 132, 87, 190, 85, 71, 30, 190, 73, 135, 159, 189, 201, 92, 195, 61, 224, 19, 147, 190, 25, 116, 132, 62, 27, 51, 14, 62, 242, 135, 108, 188, 27, 155, 30, 62, 188, 48, 164, 62, 32, 177, 194, 61, 234, 21, 3, 63, 118, 76, 130, 62, 18, 73, 94, 189, 195, 204, 62, 190, 225, 157, 81, 190, 237, 81, 56, 190, 81, 190, 43, 190, 80, 77, 133, 60, 231, 55, 118, 60, 92, 38, 235, 61, 90, 109, 144, 190, 225, 183, 220, 61, 96, 179, 2, 191, 232, 197, 140, 190, 70, 82, 254, 190, 146, 42, 194, 190, 110, 135, 131, 62, 121, 156, 132, 189, 208, 189, 144, 62, 125, 83, 110, 62, 60, 229, 57, 62, 58, 253, 219, 189, 236, 46, 164, 61, 237, 163, 198, 190, 193, 213, 67, 61, 249, 35, 167, 62, 44, 65, 135, 62, 99, 117, 4, 190, 52, 174, 63, 62, 62, 247, 245, 188, 46, 201, 87, 189, 162, 143, 197, 188, 86, 93, 241, 189, 99, 174, 115, 62, 226, 239, 249, 189, 99, 241, 141, 61, 171, 145, 215, 62, 171, 204, 72, 62, 71, 75, 102, 189, 21, 37, 131, 190, 179, 39, 201, 61, 192, 48, 208, 61, 244, 10, 146, 189, 194, 251, 60, 190, 70, 75, 193, 60, 195, 169, 240, 188, 115, 244, 155, 61, 214, 59, 111, 60, 113, 111, 145, 189, 130, 217, 24, 190, 222, 0, 241, 61, 122, 166, 4, 185, 180, 246, 153, 189, 232, 164, 215, 189, 43, 52, 37, 61, 124, 221, 245, 189, 237, 246, 36, 190, 114, 55, 69, 190, 140, 66, 222, 60, 90, 237, 70, 190, 166, 42, 135, 189, 209, 42, 247, 61, 142, 111, 46, 190, 200, 63, 195, 189, 160, 94, 16, 190, 210, 126, 39, 59, 86, 101, 10, 62, 205, 23, 0, 190, 62, 216, 70, 188, 17, 162, 33, 190, 194, 159, 224, 190, 18, 84, 32, 62, 242, 88, 0, 190, 235, 240, 60, 190, 210, 193, 153, 61, 44, 36, 61, 189, 101, 216, 215, 58, 207, 196, 38, 61, 209, 99, 3, 62, 242, 130, 148, 190, 126, 111, 184, 62, 207, 250, 44, 62, 245, 97, 32, 190, 87, 183, 29, 62, 82, 48, 179, 187, 199, 95, 159, 62, 103, 245, 50, 190, 34, 147, 172, 190, 235, 42, 99, 190, 208, 97, 227, 189, 188, 17, 68, 189, 23, 80, 153, 189, 72, 226, 192, 188, 171, 147, 116, 190, 153, 243, 1, 61, 97, 169, 217, 60, 107, 138, 137, 189, 202, 91, 151, 61, 54, 42, 39, 62, 78, 120, 199, 61, 255, 215, 90, 189, 170, 148, 20, 62, 8, 164, 37, 62, 137, 196, 213, 61, 43, 54, 91, 188, 40, 55, 161, 190, 227, 95, 53, 62, 214, 48, 93, 190, 192, 22, 33, 62, 43, 72, 105, 62, 205, 28, 8, 188, 80, 22, 132, 190, 32, 255, 186, 61, 154, 66, 69, 190, 164, 207, 19, 191, 68, 43, 9, 191, 201, 210, 71, 62, 205, 19, 142, 62, 50, 5, 129, 190, 88, 254, 153, 62, 139, 189, 9, 190, 241, 176, 145, 189, 33, 55, 15, 191, 193, 237, 120, 60, 193, 245, 193, 189, 200, 234, 24, 62, 53, 246, 6, 61, 178, 14, 209, 61, 101, 108, 13, 62, 193, 29, 207, 190, 135, 34, 236, 186, 87, 93, 136, 62, 48, 92, 13, 60, 130, 101, 49, 190, 64, 231, 136, 61, 141, 237, 195, 189, 116, 201, 163, 188, 15, 230, 21, 61, 115, 41, 134, 60, 71, 218, 71, 61, 36, 19, 200, 189, 14, 133, 163, 60, 235, 132, 137, 189, 137, 5, 248, 61, 223, 231, 220, 187, 31, 206, 17, 188, 249, 31, 6, 190, 135, 109, 142, 189, 198, 102, 124, 59, 224, 30, 249, 189, 226, 41, 55, 190, 97, 11, 85, 189, 64, 71, 245, 61, 222, 50, 109, 60, 238, 170, 228, 61, 45, 148, 153, 61, 194, 241, 168, 189, 67, 27, 183, 189, 243, 108, 29, 61, 34, 224, 45, 190, 243, 215, 28, 62, 33, 239, 119, 188, 106, 123, 78, 187, 194, 164, 55, 61, 154, 110, 45, 190, 128, 109, 47, 190, 246, 58, 206, 189, 166, 107, 181, 61, 70, 91, 94, 61, 169, 188, 204, 61, 241, 120, 14, 191, 231, 118, 81, 62, 236, 183, 21, 61, 213, 195, 250, 189, 31, 12, 150, 189, 210, 189, 229, 190, 109, 135, 245, 190, 93, 9, 60, 60, 102, 31, 105, 62, 156, 246, 19, 61, 99, 112, 20, 189, 161, 160, 246, 190, 122, 111, 182, 188, 245, 123, 103, 190, 51, 202, 212, 61, 51, 246, 138, 190, 72, 108, 74, 62, 87, 185, 91, 190, 207, 46, 172, 61, 75, 216, 240, 189, 235, 39, 177, 59, 207, 139, 46, 61, 96, 105, 179, 61, 204, 112, 140, 62, 101, 131, 138, 58, 107, 150, 185, 190, 124, 163, 155, 190, 55, 173, 206, 59, 154, 190, 84, 60, 29, 171, 193, 61, 240, 127, 0, 62, 159, 219, 6, 62, 54, 145, 39, 190, 228, 161, 106, 187, 12, 84, 140, 189, 44, 255, 177, 189, 202, 25, 20, 62, 75, 198, 226, 61, 6, 232, 142, 189, 193, 144, 249, 188, 210, 124, 147, 189, 31, 153, 25, 190, 34, 241, 45, 62, 123, 118, 161, 188, 15, 208, 136, 60, 219, 114, 1, 189, 222, 233, 0, 190, 153, 102, 23, 62, 23, 191, 48, 190, 135, 21, 73, 189, 213, 69, 186, 61, 176, 102, 223, 189, 14, 221, 52, 190, 192, 115, 192, 189, 10, 140, 51, 189, 13, 186, 153, 61, 26, 221, 177, 61, 42, 11, 52, 190, 59, 113, 147, 189, 43, 60, 7, 190, 217, 131, 165, 189, 177, 211, 177, 189, 7, 221, 198, 61, 50, 183, 121, 188, 182, 103, 146, 62, 93, 164, 235, 189, 178, 39, 216, 61, 98, 209, 52, 62, 130, 93, 98, 62, 92, 191, 128, 190, 200, 137, 150, 62, 176, 57, 168, 189, 145, 70, 129, 190, 244, 250, 40, 191, 90, 70, 79, 62, 27, 128, 221, 62, 197, 169, 61, 190, 39, 242, 121, 61, 148, 131, 217, 61, 15, 115, 122, 189, 189, 159, 112, 191, 69, 182, 225, 189, 33, 162, 180, 59, 215, 30, 226, 61, 102, 195, 121, 189, 240, 121, 247, 55, 35, 132, 207, 62, 249, 160, 14, 191, 115, 220, 195, 61, 234, 138, 157, 62, 135, 208, 19, 61, 40, 176, 159, 189, 209, 33, 153, 61, 72, 134, 144, 191, 93, 108, 74, 61, 210, 244, 38, 62, 52, 181, 216, 188, 181, 192, 166, 62, 34, 72, 177, 191, 192, 158, 232, 190, 243, 183, 139, 191, 76, 213, 84, 190, 81, 0, 44, 63, 41, 29, 140, 190, 255, 47, 27, 62, 190, 28, 57, 61, 168, 123, 205, 62, 177, 179, 217, 62, 126, 60, 173, 62, 192, 115, 149, 60, 108, 93, 180, 62, 0, 10, 49, 62, 75, 165, 23, 62, 191, 142, 185, 189, 209, 38, 175, 61, 60, 158, 178, 60, 203, 41, 89, 191, 47, 148, 146, 189, 33, 208, 48, 190, 205, 221, 253, 61, 201, 255, 22, 190, 201, 72, 52, 62, 10, 45, 140, 189, 155, 128, 7, 62, 218, 117, 51, 61, 161, 245, 208, 62, 142, 107, 71, 190, 41, 126, 118, 190, 180, 117, 55, 60, 160, 65, 140, 190, 217, 87, 179, 62, 197, 61, 132, 62, 129, 170, 37, 189, 92, 39, 2, 60, 192, 147, 95, 62, 133, 165, 26, 63, 88, 228, 144, 189, 179, 235, 223, 61, 195, 61, 240, 189, 235, 0, 130, 190, 137, 111, 226, 189, 234, 134, 237, 60, 208, 245, 251, 189, 145, 131, 180, 61, 26, 16, 186, 60, 188, 184, 254, 61, 235, 183, 184, 61, 248, 60, 108, 190, 46, 214, 38, 62, 211, 138, 23, 190, 85, 89, 134, 60, 64, 198, 78, 61, 168, 68, 138, 189, 193, 113, 96, 61, 16, 185, 66, 190, 172, 90, 125, 190, 182, 85, 13, 191, 239, 255, 167, 62, 233, 36, 229, 190, 168, 198, 227, 189, 188, 184, 175, 190, 22, 47, 72, 62, 32, 76, 15, 62, 183, 49, 215, 62, 169, 168, 155, 60, 235, 225, 249, 189, 110, 199, 72, 190, 108, 93, 182, 62, 90, 196, 92, 62, 27, 230, 80, 62, 171, 78, 141, 190, 155, 77, 109, 61, 29, 118, 175, 190, 249, 107, 98, 190, 196, 212, 107, 189, 255, 104, 22, 191, 166, 80, 74, 62, 51, 157, 129, 61, 60, 221, 22, 62, 133, 58, 155, 190, 240, 209, 186, 62, 84, 71, 232, 60, 9, 24, 69, 62, 199, 123, 162, 59, 195, 138, 137, 189, 151, 172, 40, 190, 159, 152, 165, 190, 182, 179, 18, 61, 23, 48, 226, 61, 140, 143, 132, 62, 99, 108, 143, 190, 226, 172, 128, 189, 99, 163, 36, 191, 158, 138, 19, 62, 144, 92, 241, 190, 68, 154, 134, 60, 104, 187, 204, 189, 49, 202, 17, 191, 162, 144, 124, 191, 209, 48, 151, 62, 69, 76, 198, 186, 241, 218, 229, 60, 125, 231, 180, 61, 218, 52, 20, 191, 113, 248, 138, 62, 57, 188, 147, 60, 195, 240, 152, 62, 38, 36, 161, 62, 4, 97, 98, 62, 189, 200, 45, 190, 183, 135, 6, 62, 112, 49, 43, 190, 100, 64, 236, 189, 106, 26, 201, 187, 82, 13, 113, 62, 244, 164, 21, 62, 138, 107, 39, 190, 7, 129, 12, 191, 99, 246, 53, 190, 138, 99, 138, 61};
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
                alignas(float) const unsigned char memory[] = {34, 101, 104, 59, 226, 158, 13, 62, 217, 199, 184, 189, 173, 218, 93, 62, 214, 206, 177, 188, 84, 228, 181, 189, 251, 255, 121, 62, 140, 157, 43, 189, 64, 38, 11, 190, 186, 231, 240, 189, 175, 14, 177, 61, 106, 175, 133, 189, 163, 103, 20, 62, 182, 141, 169, 189, 92, 48, 18, 60, 139, 186, 209, 61, 57, 18, 8, 190, 201, 83, 76, 62, 75, 63, 154, 188, 69, 198, 75, 61, 73, 145, 139, 61, 62, 91, 144, 61, 50, 200, 43, 62, 249, 65, 131, 62, 139, 118, 4, 190, 205, 136, 188, 189, 99, 144, 176, 58, 158, 17, 27, 62, 193, 235, 204, 61, 207, 156, 100, 190, 174, 142, 34, 190, 49, 251, 172, 61};
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
                alignas(float) const unsigned char memory[] = {215, 213, 220, 190, 61, 123, 182, 61, 171, 42, 207, 62, 160, 12, 99, 63, 101, 215, 107, 61, 7, 171, 190, 190, 184, 164, 32, 63, 9, 246, 203, 190, 29, 216, 36, 190, 122, 162, 10, 191, 147, 44, 4, 190, 231, 93, 130, 190, 233, 199, 209, 190, 61, 220, 221, 190, 196, 51, 24, 191, 121, 246, 215, 62, 32, 23, 255, 190, 62, 45, 37, 62, 195, 131, 188, 190, 166, 181, 129, 62, 181, 154, 153, 190, 89, 122, 15, 62, 90, 76, 102, 60, 41, 91, 172, 190, 14, 136, 141, 188, 204, 209, 95, 62, 56, 206, 4, 190, 23, 34, 180, 190, 198, 111, 27, 191, 28, 207, 200, 190, 85, 44, 224, 62, 90, 140, 172, 62, 148, 95, 27, 189, 229, 225, 136, 189, 198, 183, 198, 189, 174, 112, 48, 189, 96, 34, 249, 189, 66, 134, 146, 190, 18, 236, 28, 190, 82, 170, 144, 62, 164, 180, 93, 60, 145, 64, 29, 62, 15, 77, 197, 189, 46, 188, 213, 189, 152, 82, 159, 190, 12, 169, 240, 62, 162, 88, 242, 189, 25, 92, 154, 61, 17, 232, 187, 62, 230, 7, 135, 190, 46, 51, 135, 189, 168, 142, 11, 62, 4, 5, 97, 189, 32, 115, 31, 62, 182, 61, 125, 190, 254, 23, 85, 59, 83, 177, 91, 189, 159, 208, 243, 189, 66, 97, 20, 190, 170, 9, 241, 189, 146, 20, 24, 189, 155, 0, 29, 190, 118, 185, 151, 189, 76, 164, 9, 190};
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
                alignas(float) const unsigned char memory[] = {133, 115, 126, 60, 193, 69, 236, 188};
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
    alignas(float) const unsigned char memory[] = {251, 59, 171, 191, 64, 16, 156, 63, 85, 172, 123, 191};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 3, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

// NOTE: This code export assumes that the endianness of the target platform is the same as the endianness of the source platform
#include <rl_tools/containers.h>
namespace rl_tools::checkpoint::example::output {
    static_assert(sizeof(unsigned char) == 1);
    alignas(float) const unsigned char memory[] = {83, 66, 211, 191, 154, 27, 212, 190};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 2, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

namespace rl_tools::checkpoint::meta{
   char name[] = "experiments/2024-05-27_19-39-12/b738cd1_zoo_algorithm_environment/sac_pendulum-v1/0066/steps/000000000010000";
   char commit_hash[] = "b738cd18dcbee2b66aa05c642653771cd0e46c8b";
}