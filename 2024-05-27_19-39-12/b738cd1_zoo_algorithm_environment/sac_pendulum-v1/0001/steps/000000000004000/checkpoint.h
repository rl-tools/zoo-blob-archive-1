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
                alignas(float) const unsigned char memory[] = {104, 37, 43, 190, 129, 134, 240, 187, 18, 18, 8, 63, 93, 68, 224, 188, 165, 20, 66, 191, 150, 18, 192, 190, 58, 137, 169, 62, 2, 217, 131, 61, 141, 14, 48, 191, 157, 162, 27, 191, 38, 18, 42, 191, 200, 145, 82, 190, 202, 252, 251, 190, 14, 7, 216, 62, 81, 125, 44, 191, 102, 235, 171, 190, 113, 57, 168, 190, 119, 114, 181, 62, 222, 138, 190, 190, 197, 232, 65, 191, 22, 66, 46, 190, 94, 252, 27, 59, 215, 62, 51, 63, 126, 122, 19, 190, 203, 63, 209, 190, 225, 27, 96, 62, 46, 212, 75, 62, 19, 210, 173, 62, 129, 24, 77, 63, 151, 170, 215, 62, 159, 192, 16, 63, 167, 4, 167, 190, 153, 100, 157, 190, 246, 207, 211, 190, 52, 232, 230, 190, 51, 146, 6, 62, 252, 250, 16, 63, 90, 150, 229, 62, 73, 255, 33, 63, 145, 66, 46, 190, 248, 0, 64, 190, 75, 1, 31, 191, 25, 118, 162, 62, 30, 203, 140, 62, 166, 67, 29, 191, 254, 252, 62, 191, 66, 38, 82, 62, 68, 105, 186, 61, 164, 18, 88, 63, 104, 172, 6, 191, 80, 173, 190, 190, 197, 98, 130, 190, 255, 183, 75, 191, 91, 50, 209, 62, 150, 66, 13, 62, 177, 218, 112, 191, 20, 198, 246, 62, 165, 204, 197, 190, 41, 139, 250, 187, 43, 168, 116, 61, 194, 38, 249, 189, 163, 180, 80, 191, 28, 109, 219, 189, 249, 82, 52, 190, 10, 105, 134, 62, 73, 121, 93, 190, 52, 230, 214, 62, 56, 22, 243, 62, 116, 43, 244, 61, 86, 182, 198, 190, 193, 181, 65, 191, 230, 49, 195, 62, 34, 49, 30, 63, 109, 35, 233, 62, 27, 60, 226, 62, 57, 111, 46, 62, 159, 47, 51, 188, 180, 133, 237, 190, 113, 1, 3, 191, 126, 73, 173, 189, 144, 89, 78, 191, 95, 27, 67, 63, 95, 238, 92, 63, 4, 32, 49, 62, 26, 153, 9, 190, 153, 42, 13, 190, 25, 135, 251, 62, 233, 252, 141, 188, 218, 226, 219, 190, 159, 153, 163, 190, 133, 46, 168, 190, 135, 180, 14, 190, 15, 127, 58, 63, 204, 253, 179, 189, 149, 73, 210, 62, 42, 47, 126, 58};
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
                alignas(float) const unsigned char memory[] = {148, 64, 50, 191, 46, 97, 15, 191, 44, 38, 154, 189, 185, 12, 165, 62, 67, 228, 150, 190, 199, 146, 16, 63, 226, 17, 79, 189, 176, 9, 220, 62, 139, 243, 220, 188, 228, 167, 94, 190, 175, 221, 77, 62, 247, 27, 150, 190, 2, 61, 145, 60, 153, 87, 140, 189, 170, 147, 22, 63, 242, 28, 164, 62, 167, 243, 250, 62, 95, 246, 216, 62, 21, 150, 138, 62, 57, 240, 6, 63, 180, 52, 143, 62, 28, 76, 155, 62, 185, 250, 26, 63, 249, 82, 49, 62, 98, 14, 242, 61, 19, 213, 74, 190, 198, 70, 134, 190, 219, 213, 155, 190, 152, 227, 111, 186, 225, 44, 173, 190, 65, 103, 99, 189, 77, 175, 9, 191};
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
                alignas(float) const unsigned char memory[] = {162, 244, 172, 189, 146, 5, 139, 61, 146, 170, 242, 189, 138, 97, 14, 190, 159, 16, 221, 188, 5, 53, 202, 61, 98, 72, 114, 57, 250, 11, 165, 62, 198, 200, 136, 189, 117, 213, 46, 190, 233, 182, 209, 61, 241, 237, 118, 190, 152, 234, 28, 62, 72, 59, 78, 190, 183, 34, 10, 188, 166, 194, 104, 62, 155, 130, 133, 62, 231, 79, 219, 189, 175, 155, 54, 190, 3, 126, 142, 61, 32, 111, 115, 61, 25, 24, 113, 62, 175, 244, 197, 62, 52, 77, 44, 190, 234, 76, 23, 61, 138, 89, 37, 190, 23, 8, 254, 189, 52, 224, 206, 190, 61, 36, 145, 61, 152, 155, 40, 190, 148, 235, 139, 61, 123, 17, 200, 186, 185, 79, 96, 62, 149, 108, 96, 190, 233, 170, 157, 190, 59, 20, 220, 61, 8, 102, 128, 62, 36, 219, 38, 190, 255, 198, 35, 62, 62, 28, 58, 62, 18, 162, 23, 190, 132, 153, 167, 62, 151, 242, 163, 189, 144, 142, 175, 189, 13, 129, 155, 61, 220, 225, 236, 61, 249, 178, 22, 62, 116, 107, 23, 190, 90, 240, 170, 61, 240, 113, 191, 60, 65, 47, 2, 189, 142, 142, 222, 61, 217, 185, 7, 190, 246, 195, 15, 62, 100, 190, 147, 188, 125, 55, 41, 190, 155, 67, 3, 62, 50, 60, 120, 190, 188, 228, 248, 61, 133, 194, 25, 62, 10, 108, 80, 62, 231, 221, 180, 190, 49, 227, 24, 190, 185, 19, 59, 61, 81, 24, 131, 189, 219, 20, 163, 62, 146, 89, 37, 60, 184, 102, 192, 61, 175, 91, 147, 188, 67, 32, 135, 61, 158, 45, 158, 189, 30, 247, 54, 62, 168, 38, 32, 62, 220, 97, 67, 190, 27, 252, 175, 61, 66, 175, 50, 190, 105, 104, 156, 190, 133, 156, 28, 190, 198, 47, 47, 61, 112, 35, 143, 189, 172, 132, 34, 62, 231, 231, 127, 62, 2, 192, 215, 61, 130, 83, 245, 61, 8, 208, 11, 61, 124, 139, 167, 61, 223, 186, 225, 61, 213, 170, 146, 61, 172, 7, 97, 190, 83, 56, 120, 62, 147, 77, 118, 190, 234, 85, 125, 190, 174, 10, 173, 188, 185, 211, 213, 61, 131, 66, 96, 62, 246, 56, 99, 189, 248, 185, 126, 189, 150, 254, 159, 62, 159, 162, 55, 62, 45, 80, 48, 62, 88, 224, 162, 189, 239, 112, 88, 190, 215, 160, 86, 62, 144, 86, 156, 61, 19, 159, 80, 190, 168, 195, 141, 189, 28, 197, 156, 60, 77, 76, 108, 190, 236, 154, 167, 59, 74, 1, 109, 62, 142, 12, 59, 62, 96, 46, 157, 189, 157, 212, 28, 62, 142, 148, 80, 189, 134, 132, 156, 62, 134, 170, 203, 189, 7, 62, 119, 188, 225, 60, 198, 189, 46, 197, 144, 190, 194, 24, 154, 190, 206, 66, 64, 189, 184, 249, 47, 62, 169, 173, 21, 62, 170, 241, 247, 190, 221, 39, 200, 190, 219, 142, 203, 61, 166, 66, 204, 190, 102, 24, 131, 61, 43, 71, 50, 189, 215, 99, 79, 190, 59, 161, 96, 190, 70, 72, 224, 61, 182, 192, 32, 61, 107, 110, 211, 188, 240, 222, 196, 61, 44, 221, 81, 189, 70, 244, 200, 61, 194, 6, 31, 62, 43, 76, 207, 61, 242, 43, 175, 59, 0, 187, 132, 61, 167, 114, 58, 60, 145, 251, 33, 62, 91, 150, 197, 61, 225, 11, 32, 62, 23, 10, 226, 61, 23, 226, 67, 189, 158, 122, 65, 61, 66, 33, 53, 190, 152, 142, 12, 61, 105, 229, 136, 62, 12, 119, 50, 189, 229, 192, 20, 62, 20, 173, 160, 190, 201, 119, 103, 62, 247, 110, 114, 190, 111, 223, 157, 58, 208, 153, 97, 189, 223, 25, 235, 189, 34, 174, 43, 62, 224, 1, 62, 188, 30, 218, 214, 189, 70, 49, 177, 188, 110, 242, 166, 189, 41, 97, 28, 189, 209, 170, 1, 61, 140, 178, 27, 189, 254, 66, 8, 59, 214, 23, 105, 189, 193, 207, 168, 189, 229, 38, 12, 190, 72, 206, 219, 189, 127, 47, 133, 188, 185, 51, 71, 61, 132, 75, 17, 189, 201, 248, 191, 189, 120, 162, 17, 60, 164, 26, 34, 190, 189, 251, 13, 190, 251, 157, 234, 189, 12, 189, 102, 61, 62, 40, 8, 189, 19, 227, 154, 189, 157, 199, 127, 189, 197, 100, 42, 62, 182, 159, 159, 61, 177, 60, 55, 61, 167, 221, 11, 190, 42, 244, 254, 187, 125, 45, 63, 61, 131, 14, 166, 189, 34, 89, 32, 190, 224, 85, 158, 190, 88, 15, 105, 190, 70, 195, 189, 62, 106, 181, 148, 190, 167, 5, 30, 189, 145, 214, 220, 61, 32, 122, 53, 190, 241, 229, 156, 62, 152, 204, 200, 188, 255, 50, 78, 62, 75, 62, 169, 61, 10, 64, 56, 59, 103, 66, 67, 62, 150, 136, 209, 60, 82, 225, 162, 188, 94, 24, 199, 190, 4, 234, 144, 61, 190, 12, 104, 189, 143, 241, 56, 61, 185, 163, 187, 189, 32, 172, 229, 190, 105, 219, 153, 61, 253, 62, 141, 62, 80, 3, 59, 190, 162, 174, 193, 61, 104, 104, 250, 62, 16, 129, 66, 190, 68, 244, 211, 62, 123, 101, 197, 190, 250, 154, 201, 186, 234, 136, 169, 189, 82, 184, 22, 190, 168, 110, 130, 61, 12, 70, 70, 191, 141, 151, 113, 190, 144, 41, 96, 61, 143, 148, 98, 61, 199, 93, 233, 60, 69, 95, 46, 62, 45, 45, 190, 62, 243, 210, 145, 189, 171, 226, 55, 62, 175, 196, 5, 62, 155, 138, 238, 61, 126, 217, 203, 61, 76, 53, 52, 189, 15, 184, 67, 62, 167, 177, 185, 189, 72, 78, 12, 190, 39, 16, 169, 61, 191, 217, 92, 190, 253, 229, 121, 60, 82, 68, 53, 62, 140, 15, 226, 61, 167, 70, 101, 60, 60, 218, 20, 189, 0, 179, 153, 188, 180, 159, 240, 190, 5, 59, 245, 62, 0, 137, 9, 62, 17, 123, 225, 190, 212, 182, 193, 190, 25, 159, 184, 190, 30, 150, 20, 187, 136, 124, 63, 190, 91, 162, 50, 190, 77, 119, 108, 190, 68, 187, 55, 189, 4, 115, 215, 58, 48, 197, 29, 62, 232, 69, 204, 61, 192, 196, 154, 62, 50, 46, 106, 189, 43, 121, 224, 61, 70, 147, 14, 189, 215, 250, 244, 189, 58, 146, 70, 62, 253, 99, 43, 62, 118, 239, 138, 62, 69, 23, 65, 61, 40, 99, 55, 62, 157, 32, 230, 189, 57, 247, 178, 190, 30, 180, 177, 59, 175, 187, 54, 61, 240, 45, 30, 62, 79, 169, 229, 59, 19, 234, 210, 189, 207, 114, 80, 62, 231, 151, 186, 190, 154, 61, 37, 62, 164, 151, 10, 190, 0, 147, 145, 189, 53, 143, 129, 61, 193, 94, 41, 191, 90, 52, 13, 62, 112, 216, 206, 60, 139, 94, 114, 61, 110, 115, 29, 189, 49, 104, 249, 189, 128, 187, 73, 189, 123, 226, 79, 61, 29, 103, 11, 190, 46, 119, 24, 62, 126, 86, 22, 190, 109, 204, 66, 190, 113, 169, 149, 61, 130, 195, 31, 190, 118, 26, 143, 61, 221, 233, 44, 62, 163, 252, 9, 190, 151, 198, 254, 187, 201, 41, 85, 189, 200, 53, 28, 190, 106, 132, 29, 190, 4, 39, 192, 189, 13, 186, 33, 62, 179, 222, 78, 189, 113, 79, 86, 61, 18, 15, 197, 189, 72, 17, 247, 189, 33, 171, 179, 189, 57, 190, 14, 190, 72, 181, 5, 62, 118, 211, 151, 61, 104, 43, 127, 61, 165, 94, 32, 62, 240, 220, 208, 59, 30, 119, 252, 61, 165, 242, 23, 62, 22, 210, 246, 61, 75, 238, 240, 60, 58, 149, 9, 190, 209, 203, 150, 190, 11, 245, 40, 62, 147, 99, 151, 190, 191, 91, 204, 189, 207, 130, 203, 189, 2, 86, 249, 61, 49, 221, 200, 189, 228, 251, 123, 190, 238, 114, 83, 190, 21, 46, 223, 189, 155, 10, 41, 190, 49, 163, 59, 62, 102, 104, 142, 190, 211, 130, 128, 190, 154, 202, 154, 61, 94, 155, 67, 62, 211, 121, 85, 190, 58, 195, 204, 188, 36, 42, 136, 190, 252, 45, 195, 190, 142, 43, 86, 62, 166, 86, 36, 189, 69, 180, 122, 189, 9, 240, 27, 189, 115, 53, 42, 62, 116, 196, 103, 60, 159, 12, 52, 62, 173, 56, 39, 190, 206, 61, 181, 189, 253, 40, 165, 188, 60, 224, 44, 190, 165, 191, 45, 62, 165, 91, 6, 189, 159, 215, 26, 190, 223, 125, 63, 62, 57, 136, 103, 190, 53, 200, 154, 62, 15, 128, 102, 190, 97, 8, 27, 189, 136, 201, 49, 61, 228, 183, 129, 61, 214, 53, 4, 62, 24, 62, 153, 188, 212, 250, 142, 190, 10, 239, 195, 190, 248, 110, 129, 190, 104, 54, 149, 62, 210, 204, 13, 189, 86, 28, 193, 61, 199, 16, 148, 62, 57, 0, 9, 191, 89, 205, 161, 60, 85, 93, 180, 189, 181, 226, 143, 62, 238, 202, 41, 190, 27, 88, 0, 189, 20, 66, 64, 190, 46, 62, 196, 189, 155, 171, 5, 190, 99, 197, 230, 59, 132, 40, 145, 62, 219, 142, 111, 62, 145, 127, 94, 61, 38, 69, 97, 190, 131, 178, 134, 61, 96, 136, 68, 190, 84, 112, 154, 61, 194, 123, 60, 62, 211, 216, 21, 190, 161, 153, 138, 62, 167, 6, 248, 189, 219, 184, 137, 190, 57, 193, 230, 190, 4, 79, 28, 190, 87, 48, 190, 189, 238, 178, 68, 61, 217, 22, 62, 62, 46, 160, 30, 62, 200, 80, 17, 62, 83, 190, 48, 62, 233, 51, 180, 188, 36, 184, 82, 189, 154, 254, 62, 62, 48, 42, 244, 189, 132, 4, 177, 62, 79, 83, 156, 190, 143, 202, 200, 61, 95, 174, 20, 62, 230, 29, 134, 60, 193, 66, 201, 61, 180, 161, 21, 190, 28, 79, 74, 62, 153, 184, 75, 190, 15, 153, 131, 190, 5, 93, 9, 62, 168, 104, 144, 62, 34, 46, 131, 189, 82, 47, 141, 189, 133, 236, 29, 61, 162, 29, 214, 188, 78, 180, 101, 61, 150, 109, 43, 61, 233, 72, 32, 61, 166, 23, 51, 62, 29, 58, 151, 60, 115, 182, 35, 62, 85, 111, 210, 60, 127, 178, 47, 189, 228, 165, 206, 60, 36, 11, 3, 190, 236, 44, 128, 59, 103, 114, 182, 60, 254, 55, 33, 190, 246, 22, 134, 61, 182, 29, 78, 190, 200, 160, 145, 62, 104, 27, 235, 190, 45, 83, 144, 62, 70, 247, 179, 57, 92, 9, 134, 60, 13, 101, 34, 189, 35, 43, 7, 190, 41, 232, 212, 189, 236, 189, 113, 62, 215, 83, 182, 190, 52, 114, 198, 190, 31, 200, 68, 62, 220, 59, 168, 62, 242, 216, 180, 189, 140, 224, 117, 62, 126, 25, 142, 61, 117, 84, 214, 189, 227, 167, 144, 61, 18, 234, 9, 190, 192, 197, 179, 189, 50, 94, 75, 62, 51, 125, 206, 189, 241, 205, 84, 188, 165, 195, 144, 61, 239, 191, 62, 189, 110, 150, 231, 189, 62, 186, 53, 190, 16, 238, 52, 189, 95, 211, 213, 189, 169, 187, 114, 62, 113, 77, 163, 59, 63, 64, 247, 189, 213, 39, 99, 62, 186, 158, 146, 190, 13, 243, 165, 62, 167, 198, 145, 62, 63, 140, 25, 62, 137, 61, 108, 190, 191, 235, 231, 61, 209, 216, 12, 62, 26, 230, 71, 190, 89, 14, 117, 190, 100, 86, 224, 60, 179, 20, 93, 190, 244, 127, 207, 190, 104, 247, 112, 61, 31, 207, 121, 190, 174, 212, 199, 190, 243, 5, 128, 189, 62, 68, 199, 188, 70, 125, 248, 62, 193, 100, 95, 61, 131, 130, 206, 61, 243, 133, 95, 190, 180, 26, 132, 61, 131, 120, 147, 190, 116, 48, 228, 62, 144, 64, 81, 189, 20, 161, 151, 62, 191, 26, 143, 187, 75, 7, 148, 62, 78, 150, 138, 190, 60, 203, 131, 188, 119, 233, 114, 190, 242, 211, 244, 58, 161, 226, 39, 62, 45, 105, 136, 190, 55, 20, 4, 190, 237, 185, 228, 189, 199, 106, 217, 188, 173, 149, 21, 190, 127, 60, 222, 189, 222, 203, 36, 190, 94, 8, 29, 190, 201, 48, 56, 61, 70, 163, 69, 190, 198, 250, 171, 189, 244, 148, 20, 188, 153, 184, 81, 189, 231, 118, 58, 190, 113, 8, 40, 189, 161, 213, 100, 189, 78, 169, 85, 61, 34, 5, 5, 190, 163, 68, 158, 189, 226, 58, 186, 61, 125, 115, 79, 189, 17, 109, 188, 61, 158, 161, 20, 190, 218, 124, 111, 189, 134, 242, 33, 190, 138, 110, 64, 189, 140, 163, 74, 186, 82, 40, 82, 189, 164, 15, 250, 189, 25, 251, 231, 189, 210, 39, 254, 61, 7, 8, 203, 61, 231, 161, 198, 61, 102, 178, 48, 190, 170, 87, 107, 61, 69, 100, 209, 61, 5, 218, 214, 189, 50, 142, 151, 188, 193, 94, 46, 62, 68, 71, 128, 189, 163, 185, 35, 62, 126, 90, 254, 189, 82, 175, 134, 60, 119, 67, 30, 190, 208, 253, 20, 189, 60, 64, 112, 189, 248, 240, 220, 189, 2, 187, 17, 190, 100, 172, 201, 189, 243, 152, 109, 189, 94, 125, 49, 62, 32, 48, 1, 190, 166, 80, 233, 189, 139, 134, 10, 62, 159, 13, 143, 189, 76, 95, 51, 190, 147, 231, 87, 188, 249, 24, 30, 190, 20, 165, 15, 190, 47, 11, 37, 190, 24, 154, 76, 61, 48, 162, 27, 190, 247, 27, 97, 187, 31, 211, 206, 189, 25, 143, 192, 61, 166, 125, 15, 190, 218, 82, 221, 189, 38, 34, 201, 189, 236, 34, 6, 62, 231, 57, 127, 60, 179, 136, 69, 190, 230, 229, 33, 190, 233, 131, 175, 189, 16, 158, 3, 62, 161, 48, 75, 190, 241, 134, 137, 62, 90, 170, 17, 189, 101, 29, 201, 61, 6, 40, 163, 62, 7, 67, 233, 190, 206, 104, 188, 190, 52, 140, 114, 190, 76, 48, 18, 191, 32, 8, 85, 191, 139, 62, 193, 190, 174, 137, 194, 62, 7, 30, 11, 191, 17, 79, 88, 61, 63, 179, 82, 190, 109, 47, 27, 62, 67, 179, 236, 188, 82, 103, 175, 61, 115, 228, 19, 62, 44, 230, 211, 188, 176, 121, 81, 190, 104, 235, 49, 189, 18, 3, 46, 191, 98, 127, 214, 189, 7, 114, 200, 190, 43, 19, 145, 189, 58, 246, 53, 190, 227, 153, 172, 60, 174, 227, 203, 190, 68, 250, 41, 61, 137, 124, 34, 62, 7, 2, 137, 189, 83, 10, 215, 61, 96, 198, 82, 59, 99, 246, 36, 188, 198, 188, 75, 189, 199, 199, 38, 62, 67, 114, 92, 190, 119, 20, 230, 61, 204, 1, 47, 189, 157, 97, 137, 189, 106, 142, 34, 60, 140, 163, 46, 190, 222, 233, 44, 189, 165, 231, 131, 62, 122, 207, 161, 61, 202, 189, 198, 188, 79, 154, 107, 62, 34, 250, 240, 61, 248, 136, 132, 62, 91, 110, 142, 62, 215, 125, 227, 61, 124, 126, 180, 189, 31, 225, 251, 187, 2, 204, 71, 190, 180, 242, 54, 191, 133, 35, 101, 62, 200, 28, 39, 62, 0, 96, 241, 61, 184, 198, 255, 61, 245, 48, 186, 189, 243, 28, 38, 191, 201, 99, 162, 190, 226, 39, 145, 61, 65, 176, 106, 62, 182, 238, 243, 61, 11, 147, 64, 62, 171, 68, 235, 61, 6, 156, 160, 189, 250, 69, 16, 191, 162, 149, 0, 190, 60, 253, 65, 62, 240, 45, 184, 190, 118, 181, 144, 62, 229, 164, 182, 61, 99, 181, 190, 61, 163, 57, 175, 190, 231, 5, 54, 62, 35, 148, 206, 189, 67, 52, 1, 190, 126, 48, 56, 62, 86, 242, 79, 62, 1, 184, 182, 190, 200, 31, 223, 61, 193, 187, 180, 189, 73, 135, 45, 61, 233, 114, 130, 61, 169, 91, 172, 62, 135, 62, 144, 191, 20, 61, 193, 190, 75, 245, 130, 191, 190, 30, 230, 188, 41, 122, 77, 62, 190, 23, 24, 191, 33, 115, 95, 190, 151, 99, 68, 62, 156, 4, 211, 61, 4, 194, 13, 190, 167, 160, 14, 189, 69, 143, 56, 62, 31, 111, 141, 61, 204, 118, 142, 62, 200, 99, 94, 189, 190, 28, 68, 61, 41, 87, 153, 62, 130, 16, 139, 62, 156, 171, 16, 62, 246, 155, 36, 61, 92, 170, 49, 62, 254, 39, 11, 190, 229, 6, 85, 190, 210, 37, 223, 189, 93, 128, 78, 190, 56, 251, 126, 62, 168, 158, 55, 61, 234, 227, 205, 189, 162, 20, 140, 62, 158, 188, 169, 190, 223, 31, 252, 61, 134, 7, 234, 61, 196, 34, 128, 61, 172, 244, 101, 190, 224, 121, 43, 188, 117, 162, 0, 61, 184, 15, 136, 188, 0, 138, 53, 188, 26, 136, 150, 60, 147, 40, 2, 62, 196, 111, 141, 62, 35, 124, 197, 189, 194, 4, 11, 62, 155, 31, 193, 61, 67, 156, 17, 190, 75, 84, 8, 62, 241, 135, 163, 189, 213, 87, 238, 61, 96, 18, 164, 62, 80, 76, 120, 60, 201, 72, 141, 62, 57, 134, 162, 188, 242, 95, 237, 60, 31, 209, 78, 190, 144, 45, 5, 190, 201, 119, 248, 60, 121, 211, 134, 190, 36, 218, 12, 62, 160, 142, 59, 189, 198, 176, 117, 187, 109, 36, 139, 62, 144, 17, 106, 190, 30, 191, 107, 187, 90, 29, 94, 62, 128, 148, 133, 189, 126, 67, 102, 190, 53, 190, 243, 61, 30, 94, 31, 189, 122, 15, 1, 190, 74, 78, 42, 62, 80, 110, 89, 62, 124, 53, 76, 61, 235, 137, 41, 191, 139, 186, 149, 62, 135, 5, 48, 190, 4, 100, 202, 189, 1, 134, 120, 61, 60, 71, 146, 190, 43, 119, 204, 62, 44, 68, 98, 61, 125, 117, 180, 189, 136, 208, 81, 191, 0, 229, 107, 190, 206, 76, 209, 61, 135, 232, 130, 62, 163, 62, 246, 61, 64, 118, 27, 62, 237, 247, 48, 62, 255, 86, 36, 62, 253, 10, 227, 187, 60, 113, 232, 188, 104, 176, 146, 62, 104, 65, 41, 189, 40, 248, 164, 186, 156, 89, 250, 190, 32, 66, 129, 189, 235, 110, 144, 61, 204, 231, 244, 61, 176, 145, 140, 189, 195, 22, 167, 189, 96, 176, 154, 62, 57, 38, 130, 61, 132, 97, 21, 190, 40, 54, 10, 189, 0, 210, 14, 190, 215, 202, 111, 190, 202, 104, 50, 187, 167, 230, 112, 189, 5, 226, 220, 189, 213, 86, 158, 62, 187, 46, 5, 189, 181, 236, 249, 189, 177, 249, 237, 61, 185, 127, 67, 61, 193, 116, 148, 61, 114, 234, 15, 189, 30, 187, 52, 189, 207, 189, 132, 190, 230, 106, 56, 190, 223, 135, 129, 190, 216, 110, 187, 190, 18, 127, 89, 60, 244, 249, 32, 62, 186, 164, 139, 189, 207, 177, 27, 62, 166, 118, 210, 189, 138, 16, 52, 188, 122, 34, 204, 62, 246, 201, 24, 190, 137, 196, 131, 61, 124, 22, 217, 61, 170, 235, 176, 189, 220, 168, 55, 189, 152, 83, 32, 190, 206, 13, 189, 61, 181, 18, 183, 189, 49, 235, 225, 59, 74, 144, 11, 62, 80, 233, 172, 188, 242, 47, 52, 190, 158, 27, 41, 189, 104, 105, 172, 189, 232, 47, 31, 190, 199, 174, 249, 189, 181, 82, 16, 62, 101, 55, 22, 190, 103, 242, 218, 61, 236, 199, 177, 61, 119, 98, 102, 62, 9, 115, 195, 189, 211, 42, 4, 61, 229, 208, 96, 61, 96, 249, 130, 189, 23, 161, 235, 61, 193, 78, 8, 62, 96, 13, 27, 189, 203, 11, 130, 60, 109, 92, 73, 190, 51, 91, 204, 61, 241, 26, 208, 190, 75, 9, 74, 60, 164, 96, 135, 59, 14, 2, 187, 61, 109, 20, 12, 62, 218, 123, 178, 60, 75, 137, 111, 61, 245, 149, 50, 190, 208, 177, 45, 61, 173, 107, 192, 60, 166, 56, 243, 61, 198, 19, 240, 187, 172, 93, 58, 190, 70, 135, 45, 190, 77, 21, 71, 61, 243, 248, 102, 61, 169, 192, 147, 189, 213, 229, 192, 187, 150, 162, 150, 61, 81, 14, 66, 190, 27, 228, 1, 190, 14, 94, 182, 189, 19, 103, 70, 61, 55, 177, 73, 189, 169, 129, 238, 189, 35, 3, 127, 188, 223, 229, 41, 190, 68, 227, 22, 190, 130, 131, 131, 60, 200, 201, 158, 189, 62, 235, 74, 61, 109, 137, 104, 60, 140, 248, 111, 189, 222, 10, 132, 189, 177, 213, 129, 190, 127, 238, 142, 188, 140, 149, 175, 189, 149, 163, 53, 188, 105, 25, 144, 190, 56, 8, 138, 189, 3, 144, 236, 61, 122, 242, 27, 62, 251, 50, 133, 189, 183, 246, 150, 189, 7, 209, 148, 189, 207, 255, 70, 188, 248, 224, 142, 62, 237, 190, 156, 61, 221, 179, 78, 189, 32, 41, 247, 61, 212, 199, 243, 61, 143, 190, 133, 62, 34, 255, 189, 189, 72, 214, 34, 190, 205, 3, 2, 190, 150, 127, 136, 61, 41, 191, 216, 189, 195, 173, 211, 188, 208, 75, 37, 62, 158, 83, 236, 60, 130, 56, 10, 190, 115, 237, 205, 62, 246, 150, 184, 190, 4, 10, 106, 62, 167, 210, 3, 61, 168, 83, 55, 62, 70, 169, 58, 60, 160, 89, 0, 190, 160, 163, 23, 62, 240, 71, 58, 189, 92, 229, 47, 190, 99, 137, 126, 60, 245, 227, 49, 190, 195, 15, 133, 61, 37, 189, 160, 189, 233, 29, 30, 190, 39, 127, 2, 190, 235, 119, 203, 189, 222, 155, 0, 61, 82, 111, 51, 190, 190, 172, 135, 189, 208, 118, 74, 190, 203, 72, 46, 190, 36, 36, 50, 190, 93, 95, 198, 61, 187, 77, 205, 189, 180, 192, 136, 60, 252, 252, 200, 61, 219, 35, 164, 61, 78, 0, 74, 61, 190, 100, 60, 189, 151, 154, 232, 189, 90, 36, 150, 188, 196, 45, 182, 189, 165, 74, 13, 189, 218, 76, 30, 188, 72, 114, 36, 190, 238, 120, 237, 189, 204, 104, 49, 189, 146, 139, 153, 61, 206, 204, 171, 60, 24, 144, 12, 190, 209, 101, 254, 188, 202, 22, 208, 61, 50, 165, 235, 188, 173, 152, 53, 62, 229, 89, 52, 190, 232, 195, 34, 61, 60, 155, 148, 61, 253, 152, 160, 189, 170, 128, 158, 62, 102, 141, 149, 190, 63, 224, 66, 61, 40, 198, 18, 62, 90, 58, 162, 61, 15, 78, 240, 61, 223, 218, 234, 187, 84, 43, 239, 59, 88, 135, 113, 190, 212, 69, 210, 60, 60, 36, 121, 60, 162, 208, 91, 190, 100, 203, 49, 188, 245, 219, 21, 62, 202, 62, 141, 190, 218, 210, 221, 188, 150, 232, 210, 188, 230, 17, 112, 62, 108, 7, 144, 190, 58, 153, 28, 190, 56, 241, 63, 62, 0, 151, 137, 190, 233, 115, 2, 62, 207, 223, 11, 62, 220, 133, 155, 62, 134, 199, 147, 61, 84, 234, 215, 60, 174, 246, 11, 190, 252, 237, 72, 189, 12, 170, 192, 61, 234, 59, 1, 190, 9, 132, 98, 61, 254, 89, 122, 62, 233, 142, 64, 62, 174, 13, 0, 190, 206, 42, 50, 62, 248, 187, 164, 61, 24, 113, 129, 189, 197, 235, 134, 190, 128, 48, 192, 61, 109, 234, 37, 190, 171, 132, 106, 190, 199, 151, 17, 190, 2, 16, 37, 60, 230, 72, 141, 188, 174, 218, 225, 189, 222, 58, 73, 189, 106, 72, 30, 62, 49, 210, 178, 61, 48, 166, 28, 60, 101, 2, 12, 62, 59, 132, 21, 61, 168, 45, 23, 62, 100, 80, 139, 61, 231, 42, 103, 188, 67, 127, 40, 190, 100, 125, 168, 60, 75, 151, 142, 62, 229, 82, 171, 61, 241, 42, 142, 190, 92, 160, 33, 62, 43, 143, 129, 190, 5, 121, 146, 189, 206, 130, 48, 62, 16, 73, 179, 190, 30, 237, 10, 63, 193, 8, 222, 189, 138, 113, 204, 190, 219, 215, 211, 190, 176, 122, 218, 189, 135, 33, 70, 62, 148, 232, 39, 62, 183, 134, 47, 62, 146, 51, 37, 190, 249, 151, 136, 61, 54, 5, 228, 59, 86, 208, 213, 61, 71, 82, 59, 62, 2, 171, 158, 189, 204, 209, 31, 190, 105, 213, 180, 62, 151, 114, 16, 191, 34, 134, 27, 190, 151, 231, 82, 190, 44, 226, 17, 61, 128, 61, 207, 189, 214, 57, 176, 189};
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
                alignas(float) const unsigned char memory[] = {166, 80, 216, 61, 169, 242, 65, 62, 164, 91, 147, 61, 93, 211, 164, 189, 253, 254, 242, 61, 222, 25, 166, 59, 113, 131, 79, 61, 66, 97, 146, 189, 73, 52, 184, 62, 33, 130, 179, 189, 153, 60, 247, 188, 225, 121, 9, 62, 78, 80, 67, 62, 185, 198, 62, 62, 213, 119, 222, 189, 123, 1, 172, 189, 181, 195, 54, 190, 163, 4, 39, 190, 30, 103, 133, 189, 198, 77, 135, 62, 11, 1, 29, 62, 27, 151, 49, 62, 206, 121, 42, 62, 65, 72, 149, 62, 71, 80, 143, 190, 142, 210, 133, 62, 28, 203, 83, 61, 44, 49, 84, 62, 236, 236, 83, 61, 209, 71, 64, 188, 255, 226, 108, 190, 210, 126, 25, 62};
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
                alignas(float) const unsigned char memory[] = {111, 81, 29, 62, 152, 23, 130, 190, 218, 229, 103, 62, 188, 197, 131, 62, 117, 58, 133, 189, 26, 1, 24, 189, 179, 25, 251, 190, 65, 156, 208, 190, 225, 74, 171, 190, 156, 164, 137, 189, 23, 222, 103, 189, 21, 219, 163, 62, 17, 168, 145, 62, 30, 145, 116, 190, 80, 161, 161, 190, 143, 139, 236, 62, 222, 58, 156, 189, 164, 50, 20, 61, 187, 8, 253, 62, 100, 197, 124, 62, 149, 216, 25, 191, 111, 94, 169, 190, 1, 54, 88, 190, 129, 84, 6, 63, 75, 41, 221, 62, 99, 75, 188, 60, 28, 103, 171, 189, 198, 224, 51, 190, 128, 201, 10, 62, 128, 93, 75, 62, 85, 98, 62, 61, 213, 1, 6, 63, 50, 110, 53, 190, 6, 10, 18, 190, 161, 143, 209, 188, 183, 250, 179, 60, 161, 182, 138, 190, 141, 59, 15, 62, 190, 177, 46, 62, 138, 106, 154, 62, 158, 200, 210, 190, 249, 25, 43, 190, 83, 40, 230, 62, 207, 76, 225, 62, 51, 133, 197, 61, 236, 32, 31, 190, 255, 151, 254, 61, 44, 78, 125, 190, 120, 171, 139, 189, 160, 240, 152, 189, 18, 9, 16, 62, 122, 141, 107, 190, 210, 216, 223, 62, 130, 177, 134, 189, 143, 178, 14, 190, 140, 155, 198, 189, 199, 238, 176, 62, 110, 114, 54, 190, 237, 52, 196, 61, 22, 78, 50, 190, 128, 195, 129, 189, 50, 224, 144, 188, 1, 213, 204, 62, 2, 59, 29, 62};
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
                alignas(float) const unsigned char memory[] = {115, 40, 187, 188, 232, 111, 55, 190};
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
    alignas(float) const unsigned char memory[] = {215, 28, 121, 63, 104, 139, 6, 62, 114, 222, 6, 63};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 3, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

// NOTE: This code export assumes that the endianness of the target platform is the same as the endianness of the source platform
#include <rl_tools/containers.h>
namespace rl_tools::checkpoint::example::output {
    static_assert(sizeof(unsigned char) == 1);
    alignas(float) const unsigned char memory[] = {248, 94, 183, 191, 107, 151, 182, 191};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 2, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

namespace rl_tools::checkpoint::meta{
   char name[] = "experiments/2024-05-27_19-39-12/b738cd1_zoo_algorithm_environment/sac_pendulum-v1/0001/steps/000000000004000";
   char commit_hash[] = "b738cd18dcbee2b66aa05c642653771cd0e46c8b";
}